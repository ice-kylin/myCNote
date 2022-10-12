//
// Created by icekylin on 2022-04-22.
//
#include <stdio.h>

/*
 * # 变量的数据类型
 *
 * ## 数据类型
 *
 * - C 数据类型
 *   - 基本类型
 *     - 数值类型
 *       - 整型
 *         - 短整型 short
 *         - 整形 int
 *         - 长整形 long
 *       - 浮点型
 *         - 单精度型 float
 *         - 双精度型 double
 *     - 字符类型 char
 *   - 构造类型
 *     - 数组
 *     - 结构体 struct
 *     - 共用体 union
 *     - 枚举类型 enum
 *   - 指针类型
 *   - 空类型 void
 */
int main() {
    printf("int 字节数 = %lu\n", sizeof(int));
    printf("double 字节数 = %lu\n", sizeof(double));

    return 0;
}
