cmake_minimum_required(VERSION 3.16)
project(myCNote C)

set(CMAKE_C_STANDARD 99)

add_executable(myCNote helloWorld.c)

add_executable(constTest const/constTest.c)
add_executable(defineTest const/defineTest.c)
add_executable(operator operator/oper.c)
add_executable(arithmeticOper operator/arithmeticOper.c)

add_executable(diff const/diff.c)
add_executable(diff1 const/diff1.c)
add_executable(diff2 const/diff2.c)
add_executable(diff3 const/diff3.c)
add_executable(basic basic/basic.c)
add_executable(arithmeticOperExer operator/exer/arithmeticOperExer.c)
add_executable(dateConv operator/exer/dateConv.c)
add_executable(tempConv operator/exer/tempConv.c)
add_executable(basicExer basic/basicExer.c)