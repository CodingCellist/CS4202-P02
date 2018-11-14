import os
import glob

makefile_path = './Makefile'
compiler = 'CC = gcc\n'
def_flags = 'FLAGS = -Wall\n'
optim_pattern = '*.c'
unoptim_pattern = '../src/*.c'
build_dir = './build/'
asm_dir = './asm/'
data_dir = './data/'
plot_dir = data_dir + 'plots/'


def _make_dirs():
    # BUILD DIRECTORIES
    if not os.path.exists(build_dir):
        os.mkdir(build_dir)

    # ASSEMBLY DIRECTORIES
    if not os.path.exists(asm_dir):
        os.mkdir(asm_dir)

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
        makefile.write('man-optims unoptimised')
        makefile.write('\n\n')

        # write `asm:`
        makefile.write('asm: ')
        makefile.write('man-optims-asm unoptimised-asm')
        makefile.write('\n\n')

        # write `clean`
        makefile.write('clean:\n')
        makefile.write('\t$(RM) {:s}*\n'.format(build_dir))
        makefile.write('\t$(RM) {:s}*\n'.format(asm_dir))
        makefile.write('\n')

        # write manual optimisations
        makefile.write('man-optims:\n')
        for optim_file in glob.glob(optim_pattern):
            makefile.write('\t$(CC) $(FLAGS) -o {:s}{:s}_man {:s}\n'
                           .format(build_dir,
                                   optim_file.split('.')[0],
                                   optim_file))
        makefile.write('\n')
        # assembler
        makefile.write('man-optims-asm:\n')
        for optim_file in glob.glob(optim_pattern):
            makefile.write('\t$(CC) $(FLAGS) -S -o {:s}{:s}_man.s {:s}\n'
                           .format(asm_dir,
                                   optim_file.split('.')[0],
                                   optim_file))
        makefile.write('\n')

        # write unoptimised parts
        makefile.write('unoptimised:\n')
        for unoptim_file in glob.glob(unoptim_pattern):
            makefile.write('\t$(CC) $(FLAGS) -o {:s}{:s}_raw {:s}\n'
                           .format(build_dir,
                                   unoptim_file.split('/')[-1].split('.')[0],
                                   unoptim_file))
        makefile.write('\n')
        # assembler
        makefile.write('unoptimised-asm:\n')
        for unoptim_file in glob.glob(unoptim_pattern):
            makefile.write('\t$(CC) $(FLAGS) -S -o {:s}{:s}_raw.s {:s}\n'
                           .format(asm_dir,
                                   unoptim_file.split('/')[-1].split('.')[0],
                                   unoptim_file))


def configure():
    _make_dirs()
    _write_makefile()


if __name__ == '__main__':
    configure()
