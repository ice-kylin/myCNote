//
// Created by icekylin on 2022-06-06.
//
#include <stdio.h>

/*
 * # const 关键字
 *
 * - const 关键字表示后面定义了一个常量
 * - 常量不可修改
 */

const double PI = 3.14;

int main() {
    double area;
    double r = 2;

    area = PI * r * r;

    printf("area = %.2f\n", area);

    return 0;
}
