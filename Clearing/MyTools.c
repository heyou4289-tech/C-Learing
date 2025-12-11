#include "MyTools.h"
#include <stdio.h>

static void testFun()//静态函数，在当前文件中可以使用
{
    printf("this is test\n");
}

int myAdd(int a, int b)
{
    return a + b;
}

void fun()
{
    testFun();
    myAdd(12, 23);
}