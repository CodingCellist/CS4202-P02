import os
import glob

path = './Makefile'
compiler = 'CC = gcc\n'
def_flags = 'FLAGS = -O\n'
cpattern = '*.c'
optim_flags = './flags'


def configure():
    # BUILD DIRECTORIES
    build_dir = './build/'
    if not os.path.exists(build_dir):
        os.mkdir(build_dir)
    for f in open(optim_flags):
        flagdir = build_dir + f[1:].replace('-', '_').replace('\n', '')
        noflagdir = build_dir + 'fno{:s}'.format(f[2:].replace('-', '_').replace('\n', ''))
        if not os.path.isdir(flagdir):
            os.mkdir(flagdir)
        if not os.path.isdir(noflagdir):
            os.mkdir(noflagdir)

    # WRITE MAKEFILE
    if os.path.isfile(path):
        os.remove(path)
    with open(path, mode='w+') as makefile:
        # write Makefile variables
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
        makefile.write('clean:\n')
        for f in open(optim_flags):
            makefile.write('\trm {:s}{:s}/*\n'.format(build_dir, f[1:].replace('-', '_').replace('\n', '')))
            makefile.write('\trm {:s}fno{:s}/*\n'.format(build_dir, f[2:].replace('-', '_').replace('\n', '')))
        makefile.write('\n')

        # write compilation options
        for flag in open(optim_flags, mode='r'):
            makefile.write(flag.replace('-', '').replace('\n', ':\n'))
            for cfile in glob.glob(cpattern):
                makefile.write('\t$(CC) $(FLAGS) {:s} -o {:s}/{:s}{:s} {:s}\n'
                               .format(flag.replace('\n', ''),
                                       build_dir + flag[1:].replace('-', '_').replace('\n', ''),
                                       cfile.split('.')[0],
                                       flag.replace('-', '_').replace('\n', ''),
                                       cfile))
            makefile.write('\n')
            makefile.write(flag.replace('-f', '-fno').replace('-','').replace('\n', ':\n'))
            for cfile in glob.glob(cpattern):
                makefile.write('\t$(CC) $(FLAGS) {:s} -o {:s}/{:s}{:s} {:s}\n'
                               .format(flag.replace('-f', '-fno-').replace('\n', ''),
                                       build_dir + 'fno{:s}'.format(flag[2:].replace('-', '_')).replace('\n', ''),
                                       cfile.split('.')[0],
                                       flag.replace('-f', '-fno-').replace('-', '_').replace('\n', ''),
                                       cfile))
            makefile.write('\n')


if __name__ == '__main__':
    configure()
