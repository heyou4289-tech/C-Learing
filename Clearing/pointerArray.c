#include <stdio.h>
#include <stdlib.h>

/*
    指针数组：是一个数组，数组里面所有的元素是指针
        数组该怎么用就怎么用，通过数组找到里面的元素为指针，指针该怎么用就怎么用


*/

int main(void)
{
    int a = 0;
    int arr[4] = {};
    char str[16] = {0};
    int *pArr[3] = {0}; // 指针数组，数组里面有3个int*指针元素
    pArr[0] = &a;
    pArr[1] = (int *)malloc(sizeof(int) * 3);
    pArr[2] = arr;

    // 动态二维数组
    int row = 3, col = 4;
    int **p = (int **)malloc(sizeof(int *) * row); // 右边表示在堆区分配了 row 个int*的连续内存
    for (int i = 0; i < row; i++)
    {
        *(p + i) = (int *)malloc(sizeof(int) * col);
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            *(*(p + i) + j) = i * col + j + 1;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", *(*(p + i) + j));
        }
        printf("\n");
    }

    
    char *pName[3] = {"zhangsan", "lisi", "wangwu"}; // 指针数组，字符串数组
    printf("%s\n", pName[0];)

    return 0;
}