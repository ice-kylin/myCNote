cmake_minimum_required(VERSION 3.21)
project(myCNote C)

set(CMAKE_C_STANDARD 99)

add_executable(myCNote basic/basic.c basic/exer.c type_of_data/var.c type_of_data/type_of_data.c type_of_data/int.c type_of_data/float.c type_of_data/char.c type_of_data/bool.c type_of_data/type_conv.c type_of_data/pointer.c type_of_data/exer/pointer.c type_of_data/exer/exer_2.c type_of_data/exer/exer_1.c type_of_data/literal.c const/const.c const/diff.c const/define.c)
