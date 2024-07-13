#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>

int nextInt() {
    int *i = malloc((sizeof(int)));
    scanf("%d", i);
    return *i;
}

float nextFloat() {
    float *i = malloc((sizeof(float)));
    scanf("%f", i);
    return *i;
}

double nextDouble() {
    double *i = malloc((sizeof(double)));
    scanf("%lf", i);
    return *i;
}

bool nextBoolean() {
    bool *i = malloc((sizeof(bool)));
    scanf("%c", i);
    return *i;
}

short nextShort() {
    short *i = malloc((sizeof(short)));
    scanf("%hi", i);
    return *i;
}

float nextLong() {
    long *i = malloc((sizeof(long)));
    scanf("%ld", i);
    return *i;
}