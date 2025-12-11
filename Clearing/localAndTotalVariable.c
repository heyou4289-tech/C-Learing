#include <stdint.h>

//全局变量，在函数的外部定义，在后续的函数中可以直接使用
int num = 0;


int myAdd(int a, int b)
{   //局部变量 在一定范围内有效 比如：在块作用域
    int c = a + b;
    c += 20;
    return a + b;
}

int main(void)
{
    
}