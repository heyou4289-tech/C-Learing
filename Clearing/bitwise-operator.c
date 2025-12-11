#include <stdio.h>
int main(void) {

    /*
        位相关，最小的单位bit，0-1表示
            位与 &
                两边同为1，则为1

            位或 ｜
                两边有1，则为1

            位非 ~ （单目）
                0变1，1变0
            
            位异或 ^
                两边不同则为1，相同位0
            
            位左移 <<
                例：位左移1位 000010 (即2) << 000100 (即4)
                位左移 n 位，相当于乘2的n次幂

            位右移 >>
                例：位右移1位 000010 (即2) >> 000001 (即1)
                左边空出位数需看正负，正数补0，负数补1
                位左移 n 位，相当于整除2的n次幂

    */
    int a = 2;
    int b = 3;

    printf("%d\n", a & b);
    printf("%d\n", a | b);
    printf("%d\n", ~a);
    printf("%ud\n", ~a);
    printf("%d\n", a ^ b);
    printf("%d\n", a << 3);
    printf("%d\n", b << 3);
    printf("%d\n", a >> 1);
    printf("%d\n", b >> 1);

    int c = 2, d = 3;
    // int f = c;
    // c = b;
    // b = f;
    // printf("c=%d\t, d=%d\t" ,c , d);

    c = c ^ b;
    d = d ^ c;
    c = c ^ d;
    printf("c=%d\t, d=%d\t" ,c , d);
    return 0;
}