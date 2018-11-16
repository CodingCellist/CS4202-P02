# Notes
- tests were all done on the PC5 lab machines. They are configured with:
  - CPU: Intel Core i5-6500 @ 3.20GHz
  - RAM: 8GiB DDR4
  - OS: Fedora 28 (64-bit, kernel 4.18.16-200.fc28.x86_64)
  - GCC: 8.2.1 20181105

# Setup
- This practical uses some Python scripts, create a Python3 virtual environment
  if you want to. The required Python packages can be installed by running
  `pip3 install -r requirements.txt`.
- Optimisation flags are specified in the '[flags](src/flags)' file. When this
  has been changed, `python setup.py` should be run. This will create new
  directories for the builds and assembly of the additional flags, as well as
  generate a new Makefile which is aware of the new flags.

# Compiling
- `make [all]`: creates all the executables with flags enabled and disabled,
  placed in their corresponding `./build/` directories, e.g. for flag
  `-funroll-loops` the executables will be placed in `./build/funroll_loops`.
- `make asm`: as above, except it outputs to the 'asm' directory and the outputs
  are the files compiled to assembler code.
- `make <flag_name>`: compiles all the programs with the given flag enabled,
  e.g. `make funroll-loops` compiles all the programs with `-funroll-loops`. The
  compiled programs are placed in directories as detailed above.
- `make <flag_name>-asm`: as above and in `make asm`; runs a specific part of
  `make asm`.

# Run Instructions
These instructions apply to each source directory.
1. `cd` into the source directory which you wish to compile and run.
2. run `python setup.py` to generate the Makefile for the source files in that
   directory.
3. run `make`, the executables are in the "build" directory, grouped by flag
   where applicable.
4. each executable can be run through `./path/to/executable` or they can all
   be run and timed by running the `benchmark.sh` script. This will output the
   collected data to csv-files in the "data" directory.

# Benchmarks
- matrix multiply with matrices as 1d- and 2d-arrays
- incrementing all elements of an array by a constant
- simple BST insertion and traversal
- map function onto array of integers
- simple primality test
- reduction of an array, i.e. summing all the elements of the array
- summing all the integers from 1 to N
- tail-recursive factorial

# GCC Optimisations
- `-funroll-loops`
- `-foptimize-sibling-calls`
- `-floop-interchange`
- `-ftree-vectorize`
