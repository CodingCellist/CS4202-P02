from matplotlib import pyplot as plt
import argparse
import pandas as pd
import glob

data_pattern = './data/*.csv'
ylabel = 'time (s)'
plot_dest = './data/plots/{:s}{:d}.png'


def analyse(show=False):
    for file in glob.glob(data_pattern):
        with open(file) as csvfile:
            dirname = file.split('/')[-1].split('.')[0]
            df = pd.read_csv(csvfile)
            df_named = df\
                .replace(to_replace=r'build/*', value='', regex=True)\
                .replace(to_replace='{:s}/'.format(dirname), value='', regex=True)\
                .replace(to_replace='{:s}'.format(dirname[1:]), value='', regex=True)
            means_df = df_named.groupby('program').mean()
            sem_df = df_named.groupby('program').sem()
            means_df[means_df['utime'] >= 2] \
                .plot(title=dirname,
                      kind='bar',
                      yerr=sem_df[means_df['utime'] >= 2])
            plt.ylabel(ylabel=ylabel, rotation=90)
            plt.tight_layout()
            if not show:
                plt.savefig(plot_dest.format(dirname, 0))
            means_df[(means_df['utime'] < 2) & (means_df['utime'] >= 0.1)] \
                .plot(title=dirname,
                      kind='bar',
                      yerr=sem_df[(means_df['utime'] < 2) & (means_df['utime'] >= 0.1)])
            plt.ylabel(ylabel=ylabel, rotation=90)
            plt.tight_layout()
            if not show:
                plt.savefig(plot_dest.format(dirname, 1))
            means_df[means_df['utime'] < 0.1]\
                .plot(title=dirname,
                      kind='bar',
                      yerr=sem_df[means_df['utime'] < 0.1])
            plt.ylabel(ylabel=ylabel, rotation=90)
            plt.tight_layout()
            if not show:
                plt.savefig(plot_dest.format(dirname, 2))
            else:
                plt.show()


if __name__ == '__main__':
    argparser = argparse.ArgumentParser()
    argparser.add_argument('--show', action='store_true',
                           help='show the plots instead of saving them to ./data/plots/')
    args = argparser.parse_args()
    analyse(show=args.show)
