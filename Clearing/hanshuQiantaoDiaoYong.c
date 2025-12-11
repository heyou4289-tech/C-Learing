#include <stdio.h>

int myFun(int n);
int main(void) // 入口函数，代码从入口函数开始执行
{
    // 函数中允许嵌套调用。主调函数与被调函数的关系
    // 被调应该在主调之前要有定义或声明
    // 函数不允许嵌套定义

    // 函数的递归调用
    // 主调函数在函数体内部直接或者间接又调用了该主调函数

    printf("%d\n", myFun(5));
    return 0;
}

int myFun(int n)
{
    if (1 >= n)
    {
        return n;
    }
    return n * myFun(n - 1);//在函数体内直接调用了主调函数
}