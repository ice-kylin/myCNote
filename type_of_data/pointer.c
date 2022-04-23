//
// Created by icekylin on 2022-04-22.
//

//#include <stdio.h>

/*
 * # 指针
 *
 * - 如果要输出一个变量的地址，使用的格式是 `%p`
 * - 基本类型都有对应的指针类型，形式为 `数据类型 *`
 * - 此外还有指向数组的指针、指向结构体的指针、指向共用体的指针
 */

//int main() {
//    int i1 = 233;
//    // int * 表示类型为 int 指针类型
//    int *ptr1 = &i1; // &xxx 取出的是变量对应的地址
//
//    printf("i1 = %d\n", i1);
//    printf("&i1 = %p\n", &i1);
//    printf("ptr1 = %p\n", ptr1); // 1. 指针变量存放的地址 ptr
//    printf("&ptr = %p\n", &ptr1); // 2. 指针变量本身也有地址 &ptr
//    printf("*ptr = %d\n", *ptr1); // 3. 获取指针指向的值 *ptr
//
//    return 0;
//}
