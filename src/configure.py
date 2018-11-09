import os
import glob

path = './Makefile'
compiler = 'CC = gcc\n'
def_flags = 'FLAGS = -O3\n'
cpattern = '*.c'
optim_flags = './flags'
clean_str = 'clean:\n' + '\trm *_*\n'


def configure():
    if os.path.isfile(path):
        os.remove(path)
    with open(path, mode='w+') as makefile:
        makefile.write(compiler)
        makefile.write(def_flags)
        makefile.write('\n')
        # write `all:`
        makefile.write('all: ')
        for flag in open(optim_flags, mode='r'):
            makefile.write(
                '{:s} '.format(flag.replace('-', '').replace('\n', '')))
            makefile.write('{:s} '.format(
                flag.replace('-f', '-fno').replace('-', '').replace('\n', '')))
        makefile.write('\n\n')
        # write `clean`
        makefile.write(clean_str)
        makefile.write('\n')
        # write compilation options
        for flag in open(optim_flags, mode='r'):
            makefile.write(flag.replace('-', '').replace('\n', ':\n'))
            for cfile in glob.glob(cpattern):
                makefile.write('\t$(CC) $(FLAGS) {:s} -o {:s}{:s} {:s}\n'
                               .format(flag.replace('\n', ''),
                                       cfile.split('.')[0],
                                       flag.replace('-', '_').replace('\n', ''),
                                       cfile))
            makefile.write('\n')
            makefile.write(flag.replace('-f', '-fno').replace('-','').replace('\n', ':\n'))
            for cfile in glob.glob(cpattern):
                makefile.write('\t$(CC) $(FLAGS) {:s} -o {:s}{:s} {:s}\n'
                               .format(flag.replace('-f','-fno-').replace('\n', ''),
                                       cfile.split('.')[0],
                                       flag.replace('-f', '-fno').replace('-', '_').replace('\n', ''),
                                       cfile))


if __name__ == '__main__':
    configure()
