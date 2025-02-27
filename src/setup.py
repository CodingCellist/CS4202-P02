import os
import glob

makefile_path = './Makefile'
compiler = 'CC = gcc\n'
def_flags = 'FLAGS = -Wall -Wextra -O\n'
cpattern = '*.c'
optim_flags = './flags'
build_dir = './build/'
asm_dir = './asm/'
data_dir = './data/'
plot_dir = data_dir + 'plots/'


def _make_dirs():
    # BUILD DIRECTORIES
    if not os.path.exists(build_dir):
        os.mkdir(build_dir)
    for f in open(optim_flags):
        flagdir = build_dir + f[1:].replace('-', '_').replace('\n', '')
        if not os.path.isdir(flagdir):
            os.mkdir(flagdir)

    # ASSEMBLY DIRECTORIES
    if not os.path.exists(asm_dir):
        os.mkdir(asm_dir)
    for f in open(optim_flags):
        flagdir = asm_dir + f[1:].replace('-', '_').replace('\n', '')
        if not os.path.isdir(flagdir):
            os.mkdir(flagdir)

    # DATA DIRECTORY
    if not os.path.exists(data_dir):
        os.mkdir(data_dir)
    if not os.path.exists(plot_dir):
        os.mkdir(plot_dir)


def _write_makefile():
    if os.path.isfile(makefile_path):
        os.remove(makefile_path)
    with open(makefile_path, mode='w+') as makefile:
        # write Makefile variables
        makefile.write(compiler)
        makefile.write(def_flags)
        makefile.write('\n')

        # write `all:`
        makefile.write('all: ')
        for flag in open(optim_flags, mode='r'):
            makefile.write(
                '{:s} '.format(flag[1:].replace('\n', '')))
            makefile.write('{:s} '.format(
                flag.replace('-f', '-fno-')[1:].replace('\n', '')))
        makefile.write('\n\n')

        # write `asm:`
        makefile.write('asm: ')
        for flag in open(optim_flags, mode='r'):
            makefile.write(
                '{:s}-asm '.format(flag[1:].replace('\n', '')))
            makefile.write('{:s}-asm '.format(
                flag.replace('-f', '-fno-')[1:].replace('\n', '')))
        makefile.write('\n\n')

        # write `clean`
        makefile.write('clean:\n')
        for f in open(optim_flags):
            makefile.write('\t$(RM) {:s}{:s}/*\n'.format(build_dir, f[1:].replace('-', '_').replace('\n', '')))
            makefile.write('\t$(RM) {:s}{:s}/*\n'.format(asm_dir, f[1:].replace('-', '_').replace('\n', '')))
        makefile.write('\n')

        # write compilation options
        for flag in open(optim_flags, mode='r'):
            # write enabled flag
            makefile.write(flag[1:].replace('\n', ':\n'))
            for cfile in glob.glob(cpattern):
                makefile.write('\t$(CC) $(FLAGS) {:s} -o {:s}/{:s}{:s} {:s}\n'
                               .format(flag.replace('\n', ''),
                                       build_dir + flag[1:].replace('-', '_').replace('\n', ''),
                                       cfile.split('.')[0],
                                       flag.replace('-', '_').replace('\n', ''),
                                       cfile))
            makefile.write('\n')
            # write assembly part with flag enabled
            makefile.write('{:s}-asm:\n'.format(flag[1:].replace('\n', '')))
            for cfile in glob.glob(cpattern):
                makefile.write('\t$(CC) $(FLAGS) {:s} -S -o {:s}/{:s}{:s}.s {:s}\n'
                               .format(flag.replace('\n', ''),
                                       asm_dir + flag[1:].replace('-', '_').replace('\n', ''),
                                       cfile.split('.')[0],
                                       flag.replace('-', '_').replace('\n', ''),
                                       cfile))
            makefile.write('\n')
            # write disabled flag
            makefile.write(flag.replace('-f', '-fno-')[1:].replace('\n', ':\n'))
            for cfile in glob.glob(cpattern):
                makefile.write('\t$(CC) $(FLAGS) {:s} -o {:s}/{:s}{:s} {:s}\n'
                               .format(flag.replace('-f', '-fno-').replace('\n', ''),
                                       build_dir + flag[1:].replace('-', '_').replace('\n', ''),
                                       cfile.split('.')[0],
                                       flag.replace('-f', '-fno-').replace('-', '_').replace('\n', ''),
                                       cfile))
            makefile.write('\n')
            # write assembly part with flag disabled
            makefile.write('{:s}-asm:\n'.format(flag.replace('-f', '-fno-')[1:].replace('\n', '')))
            for cfile in glob.glob(cpattern):
                makefile.write('\t$(CC) $(FLAGS) {:s} -S -o {:s}/{:s}{:s}.s {:s}\n'
                               .format(flag.replace('-f', '-fno-').replace('\n', ''),
                                       asm_dir + flag[1:].replace('-', '_').replace('\n', ''),
                                       cfile.split('.')[0],
                                       flag.replace('-f', '-fno-').replace('-', '_').replace('\n', ''),
                                       cfile))
            makefile.write('\n')


def configure():
    _make_dirs()
    _write_makefile()


if __name__ == '__main__':
    configure()
