//
// Created by icekylin on 2022-06-06.
//
#include <stdio.h>

#define A 1
#define B A + 3
#define C A / B * 3

/*
 * # const 和 #define 的区别
 *
 * - const 定义常量时带类型；define 不带类型
 * - const 只是在编译、运行的时候起作用；而 define 是在编译的预处理阶段起作用
 * - define 只是简单的替换、没有类型检查；简单的字符串替换会导致边界效应
 * - const 常量可以进行调试；define 不能进行调试
 * - const 不能重定义；而 define 可以通过 `#undef` 取消某个符号的定义，再重新定义
 * - define 可以配合 `#ifdef`、`#ifndef`、`#endif` 使用
 */

int main() {
    // C = A / A + 3 * 3 = 1 / 1 + 3 * 3 = 10
    printf("C = %d", C);

    return 0;
}
