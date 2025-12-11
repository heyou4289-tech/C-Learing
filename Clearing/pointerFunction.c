#include <stdio.h>

/*
    指针函数，是一个函数，返回值是指针
    函数指针，是一个指针，指向一个函数
        函数名即函数首地址

    函数指针做为函数的参数（回调函数）
*/

int myAdd(int a, int b); // 函数声明

int mySub(int, int);

int fun(int a, int b, int (*myOp)(int, int))
{
    return myOp(a, b);
}

typedef int(*PFUN)(int,int);//函数指针的类型重定义

int main(void)
{
    printf("%d\n", myAdd(1, 2));
    int (*pFun)(int a, int b) = NULL; // 函数指针，指向所有返回值为int且有2个int形参的函数
    pFun = myAdd;
    printf("%d\n", pFun(2, 3));
    printf("\n\n");
    printf("%d\n", fun(10, 2, myAdd));
    printf("%d\n", fun(10, 2, mySub));

    PFUN pf;//类型定义变量
    pf = myAdd;
    printf("%d\n", pf);

    return 0;
}

int myAdd(int a, int b)
{
    return a + b;
}

int mySub(int a, int b)
{
    return a - b;
}
