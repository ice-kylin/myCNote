//
// Created by icekylin on 2022-06-07.
//
#include <stdio.h>

int main() {
    int i1 = 10, i2 = 20;

    int i = i1++;
    printf("i = %d, i1 = %d\n", i, i1); // i = 10, i1 = 11

    i = ++i1;
    printf("i = %d, i1 = %d\n", i, i1); // i = 12, i1 = 12

    i = i2--;
    printf("i = %d, i2 = %d\n", i, i2); // i = 20, i2 = 19

    i = --i2;
    printf("i = %d, i2 = %d\n", i, i2); // i = 18, i2 = 18

    return 0;
}
