#include <stdio.h>

/*
    数组指针：是一个指针，指向一个数组，数组为二维及以上
    定义格式：
        数据类型(*指针变量名)[所指的数组的列大小]

    数组名怎么用，数组指针名就可以怎么用

    类型重定义
        
*/

typedef int HP;
typedef int (*PARR)[3];//定义一个数组指针的类型，通过类型给出的变量，为可以指向列为3的二维数组的指针


int main(void)
{
    int arr[4] = {1, 2, 3, 4};
    int arr1[2][3] = {1, 2, 3, 4, 5, 6};

    int *p = arr;
    printf("%d\n", *p);
    p = &arr1[0][0];
    // p = arr1;
    // printf("%d\n",*p);
    int *pArr[4];           // 指针数组
    int (*pArr1)[3] = NULL; // 数组指针，可以指向所有列为3的二维数组
    pArr1 = arr1;           // 二维数组的首地址赋值给到指向所有列为3的二维数组指针上
    pArr1[0][0] = 123;
    printf("0x%x\n", *(pArr1 + 0));
    printf("0x%x\n", *(pArr1 + 1));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(pArr1 + i) + j));
            // printf("%d\t", pArr1[i][j]);
        }
        printf("\n");
    }

    int (*pArr2)[2][3]; // 数组指针，可以指向所有行为2，列为3的三维数组
    int arr2[4][3];
    pArr1 = arr2;

    PARR pa;//数组指针变量
    pa = arr1;
    return 0;
}