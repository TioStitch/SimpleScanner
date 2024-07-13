#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>

int nextInt() {
    int *i = (int *) malloc((sizeof(int)));
    scanf("%d", i);
    return *i;
}

float nextFloat() {
    float *i = (float *) malloc((sizeof(float)));
    scanf("%f", i);
    return *i;
}

double nextDouble() {
    double *i = (double *) malloc((sizeof(double)));
    scanf("%lf", i);
    return *i;
}

bool nextBoolean() {
    bool *i = (bool *) malloc((sizeof(bool)));
    scanf("%c", i);
    return *i;
}

short nextShort() {
    short *i = (short *) malloc((sizeof(short)));
    scanf("%hi", i);
    return *i;
}

long nextLong() {
    long *i = (long *) malloc((sizeof(long)));
    scanf("%ld", i);
    return *i;
}
