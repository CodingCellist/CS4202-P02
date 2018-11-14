#include <stdlib.h>
#include <stdio.h>
#define LOOPS 5
#define DIM 1024

int main(void)
{
    // counters
    int i;
    int j;
    int k;
    int l;
    int duff1;
    int duff2;
    int duff3;
    int sum;
    // set up the matrices
    int* a = (int*) malloc(DIM * DIM * sizeof(int));
    for (i = 0; i < DIM * DIM; i++)
    {
        a[i] = rand();
    }
    int* b = (int*) malloc(DIM * DIM * sizeof(int));
    for (i = 0; i < DIM * DIM; i++)
    {
        b[i] = rand();
    }
    int* result = (int*) malloc(DIM * DIM * sizeof(int));
    // run
    for (l = 0; l < LOOPS; l++)
    {
        // CAUTION: BELOW IS A TRIPLY-NESTED LOOP, MANUALLY UNROLLED. THIS WAS
        // PURELY DONE TO SEE HOW MANUAL LOOP UNROLLING COMPARES TO COMPILER
        // UNROLLING. THIS IS BY NO MEANS INTENDED TO BE HUMAN-READABLE.

        // mmult
        // unrolled using Duff's Device
        i = 0;
        duff3 = (DIM + 7) / 8;
        switch (DIM % 8)
        {
            case 0: do {
                // unrolled using Duff's Device
                j = 0;
                duff2 = (DIM + 7) / 8;
                switch (DIM % 8)
                {
                    case 0: do {
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 7:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 6:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 5:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 4:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 3:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 2:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 1:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                        } while (--duff2 > 0);
                }
                i++;
            case 7:
                // unrolled using Duff's Device
                j = 0;
                duff2 = (DIM + 7) / 8;
                switch (DIM % 8)
                {
                    case 0: do {
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 7:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 6:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 5:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 4:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 3:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 2:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 1:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                        } while (--duff2 > 0);
                }
                i++;
            case 6:
                // unrolled using Duff's Device
                j = 0;
                duff2 = (DIM + 7) / 8;
                switch (DIM % 8)
                {
                    case 0: do {
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 7:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 6:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 5:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 4:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 3:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 2:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 1:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                        } while (--duff2 > 0);
                }
                i++;
            case 5:
                // unrolled using Duff's Device
                j = 0;
                duff2 = (DIM + 7) / 8;
                switch (DIM % 8)
                {
                    case 0: do {
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 7:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 6:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 5:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 4:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 3:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 2:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 1:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                        } while (--duff2 > 0);
                }
                i++;
            case 4:
                // unrolled using Duff's Device
                j = 0;
                duff2 = (DIM + 7) / 8;
                switch (DIM % 8)
                {
                    case 0: do {
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 7:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 6:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 5:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 4:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 3:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 2:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 1:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                        } while (--duff2 > 0);
                }
                i++;
            case 3:
                // unrolled using Duff's Device
                j = 0;
                duff2 = (DIM + 7) / 8;
                switch (DIM % 8)
                {
                    case 0: do {
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 7:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 6:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 5:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 4:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 3:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 2:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 1:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                        } while (--duff2 > 0);
                }
                i++;
            case 2:
                // unrolled using Duff's Device
                j = 0;
                duff2 = (DIM + 7) / 8;
                switch (DIM % 8)
                {
                    case 0: do {
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 7:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 6:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 5:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 4:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 3:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 2:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 1:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                        } while (--duff2 > 0);
                }
                i++;
            case 1:
                // unrolled using Duff's Device
                j = 0;
                duff2 = (DIM + 7) / 8;
                switch (DIM % 8)
                {
                    case 0: do {
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 7:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 6:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 5:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 4:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 3:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 2:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                    case 1:
                        sum = 0;
                        // unrolled using Duff's Device
                        k = 0;
                        duff1 = (DIM + 7) / 8;
                        switch (DIM % 8)
                        {
                            case 0: do { sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 7:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 6:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 5:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 4:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 3:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 2:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                            case 1:      sum += a[i * DIM + k] * b[k * DIM + j]; k++;
                                } while (--duff1 > 0);
                        }
                        result[i * DIM + j] = sum;
                        j++;
                        } while (--duff2 > 0);
                }
                i++;
                } while (--duff3 > 0);
        }
        printf("%d\n", result[42]);
    }
    return 0;
}
