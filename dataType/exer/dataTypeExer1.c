//
// Created by icekylin on 4/23/22.
//
#include <stdio.h>

int main() {
    char name[] = "icekylin";
    int age = 19;
    double grade = 95.5;
    char gender[] = "女";
    char hobby[] = "play";

    printf("姓名\t\t年龄\t成绩\t性别\t爱好\n");
    printf("%s\t%d\t%.1f\t%s\t%s\n", name, age, grade, gender, hobby);

    return 0;
}
