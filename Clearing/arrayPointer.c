#include <stdio.h>
/*
    数组名即数组首地址
        可以把数组名赋值给到一个指针，通过指针的方式去访问数据(数组名怎么使用，可以直接替换成指针名)

    指针名[下标] => *(指针名+整数)
    指针偏移：
        指针在一定范围内可以偏移，通过+整数的方式进行偏移
            +整数相当于 + sizeof（类型）*整数
*/

int main(void)
{
    // int a = 10;
    // int* p = &a;
    int arr[4] = {1, 2, 3, 4};
    arr[0] = 12;
    int *p = arr; // 把数组首地址赋值给到一个指针，指针可以指向int类型的数据，p指向一个int数组
    p[0] = 123;
    p = &arr[2]; // 指针指向了数组中下标为2的元素的首地址
    *p = 666;
    *(--p)=11;
    for (int i = 0; i < 4; i++)
    {
        // printf("%d\n", arr[i]);
        printf("%d\n", *(p + i)); // 建议指针使用这种方法
    }

    char* pstr = "abcdefg";
    printf("%s\n", pstr);
    while (*pstr)
    {
        printf("%c\n", *(pstr++))
    }
    

    return 0;
}