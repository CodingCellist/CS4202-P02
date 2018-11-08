CC=gcc

all: lunroll lnounroll sibcalls nosibcalls

sibcalls:
	$(CC) -O2 -foptimize-sibling-calls -o bst_fsibl bst.c
	$(CC) -O2 -foptimize-sibling-calls -o intptrs_fsibl intptrs.c
	$(CC) -O2 -foptimize-sibling-calls -o mmult_fsibl mmult.c
	$(CC) -O2 -foptimize-sibling-calls -o mymap_fsibl mymap.c
	$(CC) -O2 -foptimize-sibling-calls -o ptest_fsibl ptest.c
	$(CC) -O2 -foptimize-sibling-calls -o trfact_fsibl trfact.c

nosibcalls:
	$(CC) -O2 -fno-optimize-sibling-calls -o bst_fno_sibl bst.c
	$(CC) -O2 -fno-optimize-sibling-calls -o intptrs_fno_sibl intptrs.c
	$(CC) -O2 -fno-optimize-sibling-calls -o mmult_fno_sibl mmult.c
	$(CC) -O2 -fno-optimize-sibling-calls -o mymap_fno_sibl mymap.c
	$(CC) -O2 -fno-optimize-sibling-calls -o ptest_fno_sibl ptest.c
	$(CC) -O2 -fno-optimize-sibling-calls -o trfact_fno_sibl trfact.c

lunroll:
	$(CC) -funroll-loops -o bst_funroll bst.c
	$(CC) -funroll-loops -o intptrs_funroll intptrs.c
	$(CC) -funroll-loops -o mmult_funroll mmult.c
	$(CC) -funroll-loops -o mymap_funroll mymap.c
	$(CC) -funroll-loops -o ptest_funroll ptest.c
	$(CC) -funroll-loops -o trfact_funroll trfact.c

lnounroll:
	$(CC) -fno-unroll-loops -o bst_fno_unroll bst.c
	$(CC) -fno-unroll-loops -o intptrs_fno_unroll intptrs.c
	$(CC) -fno-unroll-loops -o mmult_fno_unroll mmult.c
	$(CC) -fno-unroll-loops -o mymap_fno_unroll mymap.c
	$(CC) -fno-unroll-loops -o ptest_fno_unroll ptest.c
	$(CC) -fno-unroll-loops -o trfact_fno_unroll trfact.c


clean:
	rm mmult_* ptest_* intptrs_* mymap_* trfact_* bst_*
	rm *.o *.s

