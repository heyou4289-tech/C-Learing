#include <stdio.h>
/*
    联合体
        不同类型的数据，公用一段内存

*/

union MyDate
{
    int i;
    short s;
};

//联合变量初始化时，只能给第一个成员初始化
//可以理解每个成员是互斥存在，还可以理解为该段内存有不同的解释方式
union MyUnion
{
    int color;
    char c[4];
};

int main(void)
{
    printf("%lu\n", sizeof(union MyDate));
    union MyDate md = {1};
    md.i = 10;
    md.s = 2;

    return 0;
}