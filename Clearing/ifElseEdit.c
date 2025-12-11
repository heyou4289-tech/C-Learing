#include <stdio.h>
/*

    条件编译：根据不同的条件编译不同的代码段

    分：
        #if …… #els …… #endif
            如果 表达式为真，编译代码段1，为假，编译代码段2. endif结束
        #ifdef …… #else …… #endif
        #ifndef …… #else …… #endif
            如果没有定义宏，编译代码段1，否则编译代码段2，endif结束
        #else 不是必须，可有可无
*/

#if 1
    int myadd(int a, int b)
#else
int myadd(int a, int b, int c)
#endif 
{
        return a + b;
}

int main(void)
{
    printf("%d\n", myadd(1,2));
    return 0;
}