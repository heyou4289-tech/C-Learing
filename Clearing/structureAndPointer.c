#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    1、结构成员为指针
        x86 表示32位
        x64 表示64位
    2、指针指向结构变量
        指针可以去通过 -> 运算符去访问结构成员


*/

struct MyStu
{
    int id;
    char *pName;
};

int main(void)
{
    struct MyStu ms; // 在栈区占用内存
    ms.id = 1001;
    // ms.pName = "zhangsan";//有2个内存区块，pName是ms内，再栈区，
    ms.pName = (char *)malloc(sizeof(char) * 32); // pName在栈区malloc分配的内存在堆区
    strcpy(ms.pName, "lisi");
    free(ms.pName);
    printf("%lu\n", sizeof(char*));

    struct MyStu* pMs;//结构指针，可以指向一个结构变量的内存地址
    pMs = &ms;
    pMs->id=1002;
    printf("%d\n", pMs->id);
    return 0;
}