#include <stdio.h>
#include <stdlib.h>

/*

    多级指针
        类型 ** 变量名;

*/

int *getMem(int num)
{
    return (int *)malloc(num);
}

void myFun(int **p, int num)
{
    *p = (int *)malloc(num);
}

int main(void)
{
    // int a= 10;
    // int* p = &a;
    // *p = 123;
    // int** pp = &p;//二级指针
    // **pp = 999;
    // printf("%d\n", a);
    // int *p = getMem(sizeof(int) * 5);
    // int *p1 = getMem(sizeof(int) * 10);
    int *p = NULL;
    myFun(&p, sizeof(int) * 10);
    return 0;
}