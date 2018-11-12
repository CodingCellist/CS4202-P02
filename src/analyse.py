from matplotlib import pyplot as plt
import pandas as pd
import glob

data_pattern = './data/*.csv'


def analyse():
    for file in glob.glob(data_pattern):
        with open(file) as csvfile:
            dirname = file.split('/')[-1].split('.')[0]
            df = pd.read_csv(csvfile)
            df_named = df\
                .replace(to_replace=r'build/*', value='', regex=True)\
                .replace(to_replace='{:s}/'.format(dirname), value='', regex=True)
            means_df = df_named.groupby('program').mean()
            means_df[means_df['utime'] >= 0.1].plot(title=dirname, kind='bar')
            means_df[means_df['utime'] < 0.1].plot(title=dirname, kind='bar')
            plt.show()


if __name__ == '__main__':
    analyse()
