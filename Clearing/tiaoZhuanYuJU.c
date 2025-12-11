#include <stdio.h>
int main(void)
{

    /*

    跳转语句，执行跳出，或跳转的功能

    */

    // break;
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            printf("found\n");
            break;
        }
        printf("%d\n", i);
    }

    printf("\n\n\n\n\n");

    // continue; 只用于循环，用来结束当前循环，进入下一次循环
    //           下一次循环要注意，如果是for，是先到表达式3，再判断下一次循环
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d\n", i);
        
    }
    
    //goto c语言中不限制使用标号的次数，goto又可以无条件的跳转到标号处，所以可能会导致代码的混乱

    int i = 0;
MYLAB: //标号，用冒号来修饰
    printf("%d\n", ++i);
    goto MYLAB;

    return 0;
}