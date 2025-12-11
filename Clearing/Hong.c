// #include <stdio.h>
// /*

//     预处理：预先处理
//     在编译之前，把源码中一些预先处理的内容进行处理

//     宏、文件包含、条件编译

//     宏：字符串替换，用于在源码编译之前，把源码中需要替换的内容替换掉
//         无参宏
//         定义：#define 宏名 替换的字符串
//         带参宏
//         定义：#define 宏名（参数表）替换的字符串
//             //要注意L：替换后的运算符优先计算
//         宏名习惯用大写
// */

// #define PI 3.14
// #define MYINT int // 尽量少用
// #define TEST(a, b) a *b
// #define FUNCTION(c, e) c * 4 * e
// int main(void)
// {
//     double d = 2 * PI; // 在编译之前，用“3.14”这个字符串替换到当前位置
//     printf("%f\n", d);
//     // PI = 1.11;//错误，替换完之后PI就是一个3.14的常量，不能把1.11赋值给到一个常量
//     MYINT a = 10;
//     printf("%d\n", TEST(1 + 2, 2 + 3));
//     printf("%d\n", FUNCTION(1 + 1, 2 + 2));
//     return 0;
// }

#include <stdio.h>
/*
    文件包含：
        要用库函数，得有库函数的声明，在系统头文件中，所以要先包含系统的头文件(.h文件)
        使用自定义函数，可以把函数声明写在h文件中，函数定义写在c文件，在使用中，需要导入h文件

    格式：
    #include <文件名>
        只会在系统文件中查找文件名
    #include "文件名"
        在当前项目文件夹中查找，如果找不到再去系统文件中查找

    文件允许嵌套包含，在一个被包含文件中可以在再次包含其他文件
    不能重复包含 #pragma once 防止重复包含，在 vs 里面有

*/
#include "myTools12.h"
int main(void)
{
    printf("hellow\n");
    printf("%d\n", myAdd(1,2));
    return 0;
}