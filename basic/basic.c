//
// Created by icekylin on 2022-04-22.
//
// 引入头文件
#include <stdio.h>
#include <math.h>

/*
 * # main() 函数：程序的执行入口
 */
int main() {
    // 函数体
    printf("icekylin is studying C!\n");

    /*
     * # 转义字符
     */
    printf("Hello\tWorld!\n"); // 制表位
    printf("Hello C!\n"); // 换行符
    printf("\\\n"); // 第一个 \ 是转义，第二个是 \ 表示输出内容
    printf("\"\n");
    printf("\'\n");
    printf("Hello!\rWorld\n"); // 回车

    printf("姓名\t年龄\t籍贯\t住址\nJerry\t12\t河北\t北京\n");

    /*
     * # 注释
     *
     * - 单行注释
     * - 多行注释
     */

    /*
     * # C 标准库
     */
    printf("%.2f", pow(2.0, 3.0));

    return 0;
}
