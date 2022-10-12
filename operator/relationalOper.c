//
// Created by icekylin on 12/10/2022.
//
#include <stdio.h>

/*
 * # 关系运算符
 *
 * - 关系运算符的结果要么是真（非 0 表示），要么是假（0 表示）
 */
int main() {
    int a = 8, b = 7;

    printf("a > b = %d\n", a > b); // 1
    printf("a >= b = %d\n", a >= b); // 1
    printf("a < b = %d\n", a < b); // 0
    printf("a <= b = %d\n", a <= b); // 0
    printf("a == b = %d\n", a == b); // 0
    printf("a != b = %d\n", a != b); // 1

    return 0;
}
