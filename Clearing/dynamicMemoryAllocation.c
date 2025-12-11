#include <stdio.h>
#include <stdlib.h>

/*
    动态内存分配：
        程序员根据需求，向系统主动申请所需大小的内存空间

    头文件  stdlib.h
    操作相关函数
        malloc  分配一个大小为size的内存区域
        calloc  分配n个大小为size的连续内存区域
        relloc  重新分配通过malloc或calloc开辟的内存空间，改变其内存空间大小
        free    用于释放上述3个函数分配的动态内存空间

    动态内存分配的内存在堆区
    堆区的内存由程序员主动分配，也应该由程序员主动释放

    数据在内存中无类型，使用内存数据时，通过类型去内存中取相应的内存大小的值，转成类型的数据
*/

int *getMem(int num)
{
    int *p = (int *)malloc(num);
    return p;
}

int main(void)
{
    // int *p = NULL;
    // // p = (int *)malloc(sizeof(int));//分配1个4字节大小的内存区域，把首地址当成int*地址赋值给到p
    // // *p = 123;
    // // printf("%d\n", *p);
    // p = (int *)calloc(4, sizeof(int)); // 分配4个4字节大小的内存区域，把首地址当成int*地址赋值给到p
    // // p相当于指向一个没有名字的数组
    // p[0] = 1;
    // p[1] = 2;
    // realloc(p, sizeof(int) * 10);
    // p[6] = 123;
    // p[9] = 999;
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d\n", *(p + i));
    // }

    // free(p);

    // int a = 4407873;//0x00434241
    // printf("%s\n", (char*)&a);

    // char *p = (char*)malloc(sizeof(int));
    // p[0] = 'A';
    // p[1] = 'B';
    // p[2] = 'c';
    // p[3] = 5;
    // printf("%s\n", p);
    // free(p);
    int *p = getMem(sizeof(int) * 10);
    for (int i = 0; i < 10; i++)
    {
        p[i] = i + 1;
    }
    free(p);

    return 0;
}
