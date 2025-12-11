#include <stdio.h>

//在c语言中，代码要写到main函数里面，才能被执行
//代码的默认执行流程，从上往下，从左往右，依次执行（在没有碰到其他控制语句的情况下）
//在写代码过程中，只有顺序结构是不够的，还需要一些控制语句

int main(void) {

    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a + b = %d\n", a + b);
    return 0;

}