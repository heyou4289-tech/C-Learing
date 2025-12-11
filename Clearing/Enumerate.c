#include <stdio.h>
/*
    枚举：穷举，把可能的值一一的列举出来
    相当于让取值范围受限

*/

enum WeekDay
{
    sun, mon, tue, wed, thu, fri, sat
};//成员列表为值列表，也叫枚举元素列表
//默认第一个值为整数0，后面每一个的值是前面值的结果+1
//且在列出枚举元素表时，可以显示直接赋值

int main(void)
{
    enum WeekDay wd = sun;//变量的结果在值列表内
    //wd = 123;//语法无错误，但不合适
    printf("%d\n", fri);
    //wd = (enum WeekDay)1;
    switch (wd)
    {
    case sun:
        printf("2333\n");
        break;
    
    default:
        break;
    }
    return 0;

}