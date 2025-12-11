#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    指针常量 => 指针表示的地址是一个常量，意味着指针永远指向一位地址
    常量指针 => 指针用来指地址，该地址的值里面认为是一个常量

    比如：函数的参数中用到了指针，分析在函数中能不能对指针所指的内存进行修改，如果不能，要用常量指针

*/

char* myStrcpy(char * dstStr, const char* scrStr);

int main(void) 
{
    const int IV = 3;
    int a = 3, b = 4;
    int *const p = &b; // 常量需要做初始化，后续不能被修改
    // p = &a;//错误，不能修改该指针的值（地址）

    const int *p1; // 常量指针，是一个指针，指向一个常量
    int const* p2;
    p1 = &a;       // p1所指的a的内存，通过p1是无法去修改a所在内存里面的值
    //*p1 = 123;//错误，通过p1找到的地址里面的值是常量，不能修改


    const int* const p3 = &a;//常量指针常量
    //p3 = &b;
    //*p3 = 123;

    return 0;
}