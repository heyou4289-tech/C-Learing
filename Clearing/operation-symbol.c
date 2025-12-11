#include <stdio.h>
int main(void) {
    /*
    sizeof 求内存大小

    ？： 条件（三目）运算符
        操作数1，表示真假，如果为真，执行操作数2，如果为假，执行操作数3
    
    , 逗号运算符
        从左至右的顺序，依次去执行各个操作数。执行完所有操作数。
        逗号运算符的结果是最后一个操作数的结果
    */
    int a = 5;
    printf("%zu\n", sizeof(int));   
    printf("%zu\n", sizeof(a));

    int b = 6;
    int max = (a > b) ? a : b;
    printf("max = %d\n", max);
    // if (a>b)
    // {
    //     printf("max = a%d\n", a);
    // } else {
    //     printf("max = b%d\n", b);
    // }
    
    int x, y, z;
    z = ((x = 5),(y = 10), (x + y));
    printf("%d\n", z);

    return 0;
}