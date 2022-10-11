//
// Created by icekylin on 2022-06-07.
//
#include <stdio.h>

/*
 * # 华氏温度转摄氏温度
 */
int main() {
    double fahrenheit = 100.0;
    double celsius = 5.0 / 9.0 * (fahrenheit - 32.0);

    printf(
            "%.2f 华氏度 = %.2f 摄氏度",
            fahrenheit,
            celsius
    );

    return 0;
}
