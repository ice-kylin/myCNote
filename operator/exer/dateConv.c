//
// Created by icekylin on 2022-06-07.
//
#include <stdio.h>

/*
 * 假如还有 97 天放假，问还要过多少个星期零多少天
 */
int main() {
    int allDays = 97;
    int weeks = allDays / 7;
    int days = allDays % 7;

    printf(
            "还有 %d 个星期零 %d 天放假 ~",
            weeks,
            days
    );

    return 0;
}
