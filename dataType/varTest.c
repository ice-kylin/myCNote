//
// Created by icekylin on 2022-04-22.
//
#include <stdio.h>

/*
 * # 变量
 *
 * - 变量是程序的基本单位
 * - 说明
 *   - 如果输出的是整数：`%d`
 *   - 如果输出的是小数：`%f`
 *     - 如果希望保留小数点：`%.2f`
 *     - 默认保留小数点 6 位
 *   - 如果输出的是字符：`%c`
 *   - 如果输出的是字符串：`%s`
 *   - 在输出不同数据时，对应的格式化的形式要对应
 */
int main() {
    int i1 = 1; // 整形
    double d1 = 2.3; // 小数
    char c1 = 'A'; // 字符
    char s1[] = "icekylin"; // 字符串

    printf("i1 = %d\n", i1);
    printf("d1 = %.2f\n", d1);
    printf("c1 = %c\n", c1);
    printf("s1 = %s\n", s1);

    return 0;
}
