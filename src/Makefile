CC = gcc
FLAGS = -O3

all: funrollloops fnounrollloops foptimizesiblingcalls fnooptimizesiblingcalls floopinterchange fnoloopinterchange ftreevectorize fnotreevectorize 

clean:
	rm *_*

funrollloops:
	$(CC) $(FLAGS) -funroll-loops -o intptrs_funroll_loops intptrs.c
	$(CC) $(FLAGS) -funroll-loops -o ptest_funroll_loops ptest.c
	$(CC) $(FLAGS) -funroll-loops -o mymap_funroll_loops mymap.c
	$(CC) $(FLAGS) -funroll-loops -o bst_funroll_loops bst.c
	$(CC) $(FLAGS) -funroll-loops -o mmult_funroll_loops mmult.c
	$(CC) $(FLAGS) -funroll-loops -o trfact_funroll_loops trfact.c

fnounrollloops:
	$(CC) $(FLAGS) -fno-unroll-loops -o intptrs_fnounroll_loops intptrs.c
	$(CC) $(FLAGS) -fno-unroll-loops -o ptest_fnounroll_loops ptest.c
	$(CC) $(FLAGS) -fno-unroll-loops -o mymap_fnounroll_loops mymap.c
	$(CC) $(FLAGS) -fno-unroll-loops -o bst_fnounroll_loops bst.c
	$(CC) $(FLAGS) -fno-unroll-loops -o mmult_fnounroll_loops mmult.c
	$(CC) $(FLAGS) -fno-unroll-loops -o trfact_fnounroll_loops trfact.c
foptimizesiblingcalls:
	$(CC) $(FLAGS) -foptimize-sibling-calls -o intptrs_foptimize_sibling_calls intptrs.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -o ptest_foptimize_sibling_calls ptest.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -o mymap_foptimize_sibling_calls mymap.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -o bst_foptimize_sibling_calls bst.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -o mmult_foptimize_sibling_calls mmult.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -o trfact_foptimize_sibling_calls trfact.c

fnooptimizesiblingcalls:
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o intptrs_fnooptimize_sibling_calls intptrs.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o ptest_fnooptimize_sibling_calls ptest.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o mymap_fnooptimize_sibling_calls mymap.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o bst_fnooptimize_sibling_calls bst.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o mmult_fnooptimize_sibling_calls mmult.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o trfact_fnooptimize_sibling_calls trfact.c
floopinterchange:
	$(CC) $(FLAGS) -floop-interchange -o intptrs_floop_interchange intptrs.c
	$(CC) $(FLAGS) -floop-interchange -o ptest_floop_interchange ptest.c
	$(CC) $(FLAGS) -floop-interchange -o mymap_floop_interchange mymap.c
	$(CC) $(FLAGS) -floop-interchange -o bst_floop_interchange bst.c
	$(CC) $(FLAGS) -floop-interchange -o mmult_floop_interchange mmult.c
	$(CC) $(FLAGS) -floop-interchange -o trfact_floop_interchange trfact.c

fnoloopinterchange:
	$(CC) $(FLAGS) -fno-loop-interchange -o intptrs_fnoloop_interchange intptrs.c
	$(CC) $(FLAGS) -fno-loop-interchange -o ptest_fnoloop_interchange ptest.c
	$(CC) $(FLAGS) -fno-loop-interchange -o mymap_fnoloop_interchange mymap.c
	$(CC) $(FLAGS) -fno-loop-interchange -o bst_fnoloop_interchange bst.c
	$(CC) $(FLAGS) -fno-loop-interchange -o mmult_fnoloop_interchange mmult.c
	$(CC) $(FLAGS) -fno-loop-interchange -o trfact_fnoloop_interchange trfact.c
ftreevectorize:
	$(CC) $(FLAGS) -ftree-vectorize -o intptrs_ftree_vectorize intptrs.c
	$(CC) $(FLAGS) -ftree-vectorize -o ptest_ftree_vectorize ptest.c
	$(CC) $(FLAGS) -ftree-vectorize -o mymap_ftree_vectorize mymap.c
	$(CC) $(FLAGS) -ftree-vectorize -o bst_ftree_vectorize bst.c
	$(CC) $(FLAGS) -ftree-vectorize -o mmult_ftree_vectorize mmult.c
	$(CC) $(FLAGS) -ftree-vectorize -o trfact_ftree_vectorize trfact.c

fnotreevectorize:
	$(CC) $(FLAGS) -fno-tree-vectorize -o intptrs_fnotree_vectorize intptrs.c
	$(CC) $(FLAGS) -fno-tree-vectorize -o ptest_fnotree_vectorize ptest.c
	$(CC) $(FLAGS) -fno-tree-vectorize -o mymap_fnotree_vectorize mymap.c
	$(CC) $(FLAGS) -fno-tree-vectorize -o bst_fnotree_vectorize bst.c
	$(CC) $(FLAGS) -fno-tree-vectorize -o mmult_fnotree_vectorize mmult.c
	$(CC) $(FLAGS) -fno-tree-vectorize -o trfact_fnotree_vectorize trfact.c
