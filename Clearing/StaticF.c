#include <stdio.h>

// static 静态
// 静态变量 static 数据类型 变量名
// 静态函数 static 函数返回值类型 函数名 (形参表) {}
// 函数的作用默认是全局，也就是只要认识，项目哪里都可以调用

#include "MyTools.h"
#include "MyTools.c"

static int num = 10; // 文件全局，在当前文件可以使用
int a;               // 当前文件全局

int main(void)
{

    // for (int i = 0; i < 10; ++i)
    // {
    //     static int val = 0;//静态变量，修饰的是局部变量，该在块内使用，在块结束不会释放。生命周期在全局
    //     printf("%d\n", val++);
    // }

    testVal += 10;

    printf("%d\n", myAdd(1, 2));
    testFun();
    return 0;
}