//
// Created by icekylin on 2022-06-07.
//
#include <stdio.h>

/*
 * # 算术运算符
 *
 * - 对于 `/`，整数除和小数除是有区别的
 * - 取模公式：a % b = a - a / b * b
 *   - 结果的正负取决于 a 的正负
 */

int main() {
    double d1 = 10 / 4;
    // 如果希望保留小数，参与运算的数必须有浮点数
    double d2 = 10.0 / 4.0;

    printf("d1 = %.2f\n", d1); // 2.00
    printf("d2 = %.2f\n\n", d2); // 2.50

    int i1 = 10 % 3;
    int i2 = -10 % 3; // (-10) - (-10) / 3 * 3 = (-10) - (-3) * 3 = (-10) - (-9) = -1
    int i3 = 10 % -3; // 10 - 10 / (-3) * (-3) = 10 - (-3) * (-3) = 10 - 9 = 1
    int i4 = -10 % -3; // (-10) - (-10) / (-3) * (-3) = (-10) - 3 * (-3) = (-10) + 9 = -1

    printf("i1 = %d\n", i1);
    printf("i2 = %d\n", i2);
    printf("i3 = %d\n", i3);
    printf("i4 = %d\n\n", i4);

    int i = 10;
    int j = i++;
    printf("i = %d, j = %d\n", i, j);

    i = 10;
    int k = ++i;
    printf("i = %d, k = %d\n", i, k);

    return 0;
}
