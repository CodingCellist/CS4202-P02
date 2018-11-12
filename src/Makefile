CC = gcc
FLAGS = -Wall -Wextra -O

all: funroll-loops fnounroll-loops foptimize-sibling-calls fnooptimize-sibling-calls floop-interchange fnoloop-interchange ftree-vectorize fnotree-vectorize 

asm: funroll-loops-asm fnounroll-loops-asm foptimize-sibling-calls-asm fnooptimize-sibling-calls-asm floop-interchange-asm fnoloop-interchange-asm ftree-vectorize-asm fnotree-vectorize-asm 

clean:
	$(RM) ./build/funroll_loops/*
	$(RM) ./asm/funroll_loops/*
	$(RM) ./build/fno_unroll_loops/*
	$(RM) ./asm/fno_unroll_loops/*
	$(RM) ./build/foptimize_sibling_calls/*
	$(RM) ./asm/foptimize_sibling_calls/*
	$(RM) ./build/fno_optimize_sibling_calls/*
	$(RM) ./asm/fno_optimize_sibling_calls/*
	$(RM) ./build/floop_interchange/*
	$(RM) ./asm/floop_interchange/*
	$(RM) ./build/fno_loop_interchange/*
	$(RM) ./asm/fno_loop_interchange/*
	$(RM) ./build/ftree_vectorize/*
	$(RM) ./asm/ftree_vectorize/*
	$(RM) ./build/fno_tree_vectorize/*
	$(RM) ./asm/fno_tree_vectorize/*

funroll-loops:
	$(CC) $(FLAGS) -funroll-loops -o ./build/funroll_loops/ptest_funroll_loops ptest.c
	$(CC) $(FLAGS) -funroll-loops -o ./build/funroll_loops/mymap_funroll_loops mymap.c
	$(CC) $(FLAGS) -funroll-loops -o ./build/funroll_loops/bst_funroll_loops bst.c
	$(CC) $(FLAGS) -funroll-loops -o ./build/funroll_loops/mmult_funroll_loops mmult.c
	$(CC) $(FLAGS) -funroll-loops -o ./build/funroll_loops/trfact_funroll_loops trfact.c

funroll-loops-asm:
	$(CC) $(FLAGS) -funroll-loops -S -o ./asm/funroll_loops/ptest_funroll_loops.s ptest.c
	$(CC) $(FLAGS) -funroll-loops -S -o ./asm/funroll_loops/mymap_funroll_loops.s mymap.c
	$(CC) $(FLAGS) -funroll-loops -S -o ./asm/funroll_loops/bst_funroll_loops.s bst.c
	$(CC) $(FLAGS) -funroll-loops -S -o ./asm/funroll_loops/mmult_funroll_loops.s mmult.c
	$(CC) $(FLAGS) -funroll-loops -S -o ./asm/funroll_loops/trfact_funroll_loops.s trfact.c

fnounroll-loops:
	$(CC) $(FLAGS) -fno-unroll-loops -o ./build/funroll_loops/ptest_fno_unroll_loops ptest.c
	$(CC) $(FLAGS) -fno-unroll-loops -o ./build/funroll_loops/mymap_fno_unroll_loops mymap.c
	$(CC) $(FLAGS) -fno-unroll-loops -o ./build/funroll_loops/bst_fno_unroll_loops bst.c
	$(CC) $(FLAGS) -fno-unroll-loops -o ./build/funroll_loops/mmult_fno_unroll_loops mmult.c
	$(CC) $(FLAGS) -fno-unroll-loops -o ./build/funroll_loops/trfact_fno_unroll_loops trfact.c

fnounroll-loops-asm:
	$(CC) $(FLAGS) -fno-unroll-loops -S -o ./asm/funroll_loops/ptest_fno_unroll_loops.s ptest.c
	$(CC) $(FLAGS) -fno-unroll-loops -S -o ./asm/funroll_loops/mymap_fno_unroll_loops.s mymap.c
	$(CC) $(FLAGS) -fno-unroll-loops -S -o ./asm/funroll_loops/bst_fno_unroll_loops.s bst.c
	$(CC) $(FLAGS) -fno-unroll-loops -S -o ./asm/funroll_loops/mmult_fno_unroll_loops.s mmult.c
	$(CC) $(FLAGS) -fno-unroll-loops -S -o ./asm/funroll_loops/trfact_fno_unroll_loops.s trfact.c

foptimize-sibling-calls:
	$(CC) $(FLAGS) -foptimize-sibling-calls -o ./build/foptimize_sibling_calls/ptest_foptimize_sibling_calls ptest.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -o ./build/foptimize_sibling_calls/mymap_foptimize_sibling_calls mymap.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -o ./build/foptimize_sibling_calls/bst_foptimize_sibling_calls bst.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -o ./build/foptimize_sibling_calls/mmult_foptimize_sibling_calls mmult.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -o ./build/foptimize_sibling_calls/trfact_foptimize_sibling_calls trfact.c

foptimize-sibling-calls-asm:
	$(CC) $(FLAGS) -foptimize-sibling-calls -S -o ./asm/foptimize_sibling_calls/ptest_foptimize_sibling_calls.s ptest.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -S -o ./asm/foptimize_sibling_calls/mymap_foptimize_sibling_calls.s mymap.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -S -o ./asm/foptimize_sibling_calls/bst_foptimize_sibling_calls.s bst.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -S -o ./asm/foptimize_sibling_calls/mmult_foptimize_sibling_calls.s mmult.c
	$(CC) $(FLAGS) -foptimize-sibling-calls -S -o ./asm/foptimize_sibling_calls/trfact_foptimize_sibling_calls.s trfact.c

fnooptimize-sibling-calls:
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o ./build/foptimize_sibling_calls/ptest_fno_optimize_sibling_calls ptest.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o ./build/foptimize_sibling_calls/mymap_fno_optimize_sibling_calls mymap.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o ./build/foptimize_sibling_calls/bst_fno_optimize_sibling_calls bst.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o ./build/foptimize_sibling_calls/mmult_fno_optimize_sibling_calls mmult.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -o ./build/foptimize_sibling_calls/trfact_fno_optimize_sibling_calls trfact.c

fnooptimize-sibling-calls-asm:
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -S -o ./asm/foptimize_sibling_calls/ptest_fno_optimize_sibling_calls.s ptest.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -S -o ./asm/foptimize_sibling_calls/mymap_fno_optimize_sibling_calls.s mymap.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -S -o ./asm/foptimize_sibling_calls/bst_fno_optimize_sibling_calls.s bst.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -S -o ./asm/foptimize_sibling_calls/mmult_fno_optimize_sibling_calls.s mmult.c
	$(CC) $(FLAGS) -fno-optimize-sibling-calls -S -o ./asm/foptimize_sibling_calls/trfact_fno_optimize_sibling_calls.s trfact.c

floop-interchange:
	$(CC) $(FLAGS) -floop-interchange -o ./build/floop_interchange/ptest_floop_interchange ptest.c
	$(CC) $(FLAGS) -floop-interchange -o ./build/floop_interchange/mymap_floop_interchange mymap.c
	$(CC) $(FLAGS) -floop-interchange -o ./build/floop_interchange/bst_floop_interchange bst.c
	$(CC) $(FLAGS) -floop-interchange -o ./build/floop_interchange/mmult_floop_interchange mmult.c
	$(CC) $(FLAGS) -floop-interchange -o ./build/floop_interchange/trfact_floop_interchange trfact.c

floop-interchange-asm:
	$(CC) $(FLAGS) -floop-interchange -S -o ./asm/floop_interchange/ptest_floop_interchange.s ptest.c
	$(CC) $(FLAGS) -floop-interchange -S -o ./asm/floop_interchange/mymap_floop_interchange.s mymap.c
	$(CC) $(FLAGS) -floop-interchange -S -o ./asm/floop_interchange/bst_floop_interchange.s bst.c
	$(CC) $(FLAGS) -floop-interchange -S -o ./asm/floop_interchange/mmult_floop_interchange.s mmult.c
	$(CC) $(FLAGS) -floop-interchange -S -o ./asm/floop_interchange/trfact_floop_interchange.s trfact.c

fnoloop-interchange:
	$(CC) $(FLAGS) -fno-loop-interchange -o ./build/floop_interchange/ptest_fno_loop_interchange ptest.c
	$(CC) $(FLAGS) -fno-loop-interchange -o ./build/floop_interchange/mymap_fno_loop_interchange mymap.c
	$(CC) $(FLAGS) -fno-loop-interchange -o ./build/floop_interchange/bst_fno_loop_interchange bst.c
	$(CC) $(FLAGS) -fno-loop-interchange -o ./build/floop_interchange/mmult_fno_loop_interchange mmult.c
	$(CC) $(FLAGS) -fno-loop-interchange -o ./build/floop_interchange/trfact_fno_loop_interchange trfact.c

fnoloop-interchange-asm:
	$(CC) $(FLAGS) -fno-loop-interchange -S -o ./asm/floop_interchange/ptest_fno_loop_interchange.s ptest.c
	$(CC) $(FLAGS) -fno-loop-interchange -S -o ./asm/floop_interchange/mymap_fno_loop_interchange.s mymap.c
	$(CC) $(FLAGS) -fno-loop-interchange -S -o ./asm/floop_interchange/bst_fno_loop_interchange.s bst.c
	$(CC) $(FLAGS) -fno-loop-interchange -S -o ./asm/floop_interchange/mmult_fno_loop_interchange.s mmult.c
	$(CC) $(FLAGS) -fno-loop-interchange -S -o ./asm/floop_interchange/trfact_fno_loop_interchange.s trfact.c

ftree-vectorize:
	$(CC) $(FLAGS) -ftree-vectorize -o ./build/ftree_vectorize/ptest_ftree_vectorize ptest.c
	$(CC) $(FLAGS) -ftree-vectorize -o ./build/ftree_vectorize/mymap_ftree_vectorize mymap.c
	$(CC) $(FLAGS) -ftree-vectorize -o ./build/ftree_vectorize/bst_ftree_vectorize bst.c
	$(CC) $(FLAGS) -ftree-vectorize -o ./build/ftree_vectorize/mmult_ftree_vectorize mmult.c
	$(CC) $(FLAGS) -ftree-vectorize -o ./build/ftree_vectorize/trfact_ftree_vectorize trfact.c

ftree-vectorize-asm:
	$(CC) $(FLAGS) -ftree-vectorize -S -o ./asm/ftree_vectorize/ptest_ftree_vectorize.s ptest.c
	$(CC) $(FLAGS) -ftree-vectorize -S -o ./asm/ftree_vectorize/mymap_ftree_vectorize.s mymap.c
	$(CC) $(FLAGS) -ftree-vectorize -S -o ./asm/ftree_vectorize/bst_ftree_vectorize.s bst.c
	$(CC) $(FLAGS) -ftree-vectorize -S -o ./asm/ftree_vectorize/mmult_ftree_vectorize.s mmult.c
	$(CC) $(FLAGS) -ftree-vectorize -S -o ./asm/ftree_vectorize/trfact_ftree_vectorize.s trfact.c

fnotree-vectorize:
	$(CC) $(FLAGS) -fno-tree-vectorize -o ./build/ftree_vectorize/ptest_fno_tree_vectorize ptest.c
	$(CC) $(FLAGS) -fno-tree-vectorize -o ./build/ftree_vectorize/mymap_fno_tree_vectorize mymap.c
	$(CC) $(FLAGS) -fno-tree-vectorize -o ./build/ftree_vectorize/bst_fno_tree_vectorize bst.c
	$(CC) $(FLAGS) -fno-tree-vectorize -o ./build/ftree_vectorize/mmult_fno_tree_vectorize mmult.c
	$(CC) $(FLAGS) -fno-tree-vectorize -o ./build/ftree_vectorize/trfact_fno_tree_vectorize trfact.c

fnotree-vectorize-asm:
	$(CC) $(FLAGS) -fno-tree-vectorize -S -o ./asm/ftree_vectorize/ptest_fno_tree_vectorize.s ptest.c
	$(CC) $(FLAGS) -fno-tree-vectorize -S -o ./asm/ftree_vectorize/mymap_fno_tree_vectorize.s mymap.c
	$(CC) $(FLAGS) -fno-tree-vectorize -S -o ./asm/ftree_vectorize/bst_fno_tree_vectorize.s bst.c
	$(CC) $(FLAGS) -fno-tree-vectorize -S -o ./asm/ftree_vectorize/mmult_fno_tree_vectorize.s mmult.c
	$(CC) $(FLAGS) -fno-tree-vectorize -S -o ./asm/ftree_vectorize/trfact_fno_tree_vectorize.s trfact.c

