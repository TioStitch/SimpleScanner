#include <stdio.h>
#include <stdbool.h>
#include <sys/types.h>

int nextInt() {
    int i = 0;
    scanf("%d", &i);
    return i;
}

float nextFloat() {
    float i = 0;
    scanf("%f", &i);
    return i;
}

double nextDouble() {
    double i = 0;
    scanf("%lf", &i);
    return i;
}

bool nextBoolean() {
    bool i = 0;
    scanf("%c", &i);
    return i;
}

short nextShort() {
    short i = 0;
    scanf("%hi", &i);
    return i;
}

long nextLong() {
    long i = 0;
    scanf("%ld", &i);
    return i;
}
