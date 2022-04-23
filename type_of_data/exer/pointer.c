//
// Created by icekylin on 2022-04-23.
//

#include <stdio.h>

int main() {
    // 获取一个 double 变量 num 的地址，并显示到终端
    double num = 666.666;

    printf("num = %f\n", num);
    printf("&num = %p\n\n", &num);

    // 将 num 的地址赋给指针 ptr，并通过 ptr 去修改 num 的值
    double *ptr = &num;
    *ptr = 233.333;

    printf("ptr = %p\n", ptr);
    printf("num = %f\n", num);
    printf("*ptr = %f\n", *ptr);

    return 0;
}
