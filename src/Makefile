CC = gcc
FLAGS = -O

all: funrollloops fnounrollloops foptimizesiblingcalls fnooptimizesiblingcalls floopinterchange fnoloopinterchange ftreevectorize fnotreevectorize 

clean:
	rm ./build/funroll_loops/*
	rm ./build/fnounroll_loops/*
	rm ./build/foptimize_sibling_calls/*
	rm ./build/fnooptimize_sibling_calls/*
	rm ./build/floop_interchange/*
	rm ./build/fnoloop_interchange/*
	rm ./build/ftree_vectorize/*
	rm ./build/fnotree_vectorize/*

funrollloops:
	$(CC) $(FLAGS) -funroll-loops -o ./build/funroll_loops/ptest_funroll_loops ptest.c
	$(CC) $(FLAGS) -funroll-loops -o ./build/funroll_loops/mymap_funroll_loops mymap.c
	$(CC) $(FLAGS) -funroll-loops -o ./build/funroll_loops/bst_funroll_loops bst.c
	$(CC) $(FLAGS) -funroll-loops -o ./build/funroll_loops/mmult_funroll_loops mmult.c
	$(CC) $(FLAGS) -funroll-loops -o ./build/funroll_loops/trfact_funroll_loops trfact.c

fnounrollloops:
	$(CC) $(FLAGS) -fno-unroll-loops -o ./build/fnounroll_loops/ptest_fno_unroll_loops ptest.c
	$(CC) $(FLAGS) -fno-unroll-loops -o ./build/fnounroll_loops/mymap_fno_unroll_loops mymap.c
	$(CC) $(FLAGS) -fno-unroll-loops -o ./build/fnounroll_loops/bst_fno_unroll_loops bst.c
	$(CC) $(FLAGS) -fno-unroll-loops -o ./build/fnounroll_loops/mmult_fno_unroll_loops mmult.c
	$(CC) $(FLAGS) -fno-unroll-loops -o ./build/fnounroll_loops/trfact_fno_unroll_loops trfact.c

foptimizesiblingcalls:
	$(CC) $(FLAGS) -foptimize-sibling-calls -o ./build/foptimize_sibling_calls/ptest_foptimize_sibling_calls ptest.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -o ./build/foptimize_sibling_calls/mymap_foptimize_sibling_calls mymap.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -o ./build/foptimize_sibling_calls/bst_foptimize_sibling_calls bst.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -o ./build/foptimize_sibling_calls/mmult_foptimize_sibling_calls mmult.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -o ./build/foptimize_sibling_calls/trfact_foptimize_sibling_calls trfact.c

fnooptimizesiblingcalls:
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o ./build/fnooptimize_sibling_calls/ptest_fno_optimize_sibling_calls ptest.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o ./build/fnooptimize_sibling_calls/mymap_fno_optimize_sibling_calls mymap.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o ./build/fnooptimize_sibling_calls/bst_fno_optimize_sibling_calls bst.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o ./build/fnooptimize_sibling_calls/mmult_fno_optimize_sibling_calls mmult.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o ./build/fnooptimize_sibling_calls/trfact_fno_optimize_sibling_calls trfact.c

floopinterchange:
	$(CC) $(FLAGS) -floop-interchange -o ./build/floop_interchange/ptest_floop_interchange ptest.c
	$(CC) $(FLAGS) -floop-interchange -o ./build/floop_interchange/mymap_floop_interchange mymap.c
	$(CC) $(FLAGS) -floop-interchange -o ./build/floop_interchange/bst_floop_interchange bst.c
	$(CC) $(FLAGS) -floop-interchange -o ./build/floop_interchange/mmult_floop_interchange mmult.c
	$(CC) $(FLAGS) -floop-interchange -o ./build/floop_interchange/trfact_floop_interchange trfact.c

fnoloopinterchange:
	$(CC) $(FLAGS) -fno-loop-interchange -o ./build/fnoloop_interchange/ptest_fno_loop_interchange ptest.c
	$(CC) $(FLAGS) -fno-loop-interchange -o ./build/fnoloop_interchange/mymap_fno_loop_interchange mymap.c
	$(CC) $(FLAGS) -fno-loop-interchange -o ./build/fnoloop_interchange/bst_fno_loop_interchange bst.c
	$(CC) $(FLAGS) -fno-loop-interchange -o ./build/fnoloop_interchange/mmult_fno_loop_interchange mmult.c
	$(CC) $(FLAGS) -fno-loop-interchange -o ./build/fnoloop_interchange/trfact_fno_loop_interchange trfact.c

ftreevectorize:
	$(CC) $(FLAGS) -ftree-vectorize -o ./build/ftree_vectorize/ptest_ftree_vectorize ptest.c
	$(CC) $(FLAGS) -ftree-vectorize -o ./build/ftree_vectorize/mymap_ftree_vectorize mymap.c
	$(CC) $(FLAGS) -ftree-vectorize -o ./build/ftree_vectorize/bst_ftree_vectorize bst.c
	$(CC) $(FLAGS) -ftree-vectorize -o ./build/ftree_vectorize/mmult_ftree_vectorize mmult.c
	$(CC) $(FLAGS) -ftree-vectorize -o ./build/ftree_vectorize/trfact_ftree_vectorize trfact.c

fnotreevectorize:
	$(CC) $(FLAGS) -fno-tree-vectorize -o ./build/fnotree_vectorize/ptest_fno_tree_vectorize ptest.c
	$(CC) $(FLAGS) -fno-tree-vectorize -o ./build/fnotree_vectorize/mymap_fno_tree_vectorize mymap.c
	$(CC) $(FLAGS) -fno-tree-vectorize -o ./build/fnotree_vectorize/bst_fno_tree_vectorize bst.c
	$(CC) $(FLAGS) -fno-tree-vectorize -o ./build/fnotree_vectorize/mmult_fno_tree_vectorize mmult.c
	$(CC) $(FLAGS) -fno-tree-vectorize -o ./build/fnotree_vectorize/trfact_fno_tree_vectorize trfact.c

