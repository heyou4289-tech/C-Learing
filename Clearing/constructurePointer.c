#include <stdio.h>
/*
    1、指针做为函数的参数 =》址传递。在函数内部通过地址的间接操作可以操作外部的实参
    2、函数的返回值类型为指针类型


*/

int myAdd(int *a, int *b)
{

    return *a + *b;
}

void mySwap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
    //printf("a = %d\tb = %d\n", a,b);
}

int* fun(void)
{
    return NULL;
}

int main(void)
{
    int a = 1, b = 2;
    printf("%d\n", myAdd(&a, &b));
    mySwap(&a, &b);
    printf("a = %d\tb = %d\n", a,b);
    return 0;
}