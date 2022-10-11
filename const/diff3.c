//
// Created by icekylin on 2022-06-07.
//
#include <stdio.h>

#define DEBUG

int main() {
#ifdef DEBUG
    printf("debug info...");
#endif

#ifndef DEBUG
    printf("Hello World!");
#endif

    return 0;
}
