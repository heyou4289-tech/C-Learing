#include <stdio.h>
int main(void)
{
    // for loop
    int a = 0;
    int num = 0;
    for (int i = 0; i < 10; i++)
    {
        a++;
        num = num + 1;
    }
    printf("%d\n", a);
    printf("%d\n\n\n", num);

    // while loop 后面跟圆括号，圆括号中一般为关系表达式或逻辑表达式，如果算术就非0即为真
    int q = 0;
    while (q < 10)
    {
        q++;
    }
    printf("%d\n", q);
    //do while 先执行后判断
    do
    {

        q--;

    } while (q > 0);
    printf("%d\n", q);

    return 0;
}