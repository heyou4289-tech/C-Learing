// // 定义了一个MyPoint类型，该类型是一个结构类型
// // 结构类型：通过自身需求，使用不同数据的组合而组成的一个数据类型
// // 语法：
// struct MyPoint
// {
//     // 成员列表
//     int x;
//     int y;
// };

// struct MyStudent
// {
//     int id;
//     char name[16];
//     float score;
// } ms = {2,"qwer", 99.9f};

// // 1、定义类型，通过类型给出变量
// // 2、定义类型的同时，给出变量。19行的ms就是定义类型的同时，给出结构变量
// // 3、定义类型时，如果给出变量，可以缺省类型名
// //          注意：无类型名，只能通过变量名去操作，无法通过类型定义新的变量

// // 结构体变量的初始化赋值（在定义结构体变量的同时依次给成员列表中的数据赋初值）
// int main(void)
// {
//     struct MyPoint pos; // 结构类型变量。struct 类型名 变量名;
//     struct MyStudent student;
//     struct MyPoint p = {10, 20}; // 初始化赋值
//     p.x = 12;
//     p.y = 23;

//     if(strcmp(ms.name, "qwer") == 0)
//     {
//         printf("==\n");
//     }

//     return 0;
// }

/*
    类型重定义：
        typedef：用新的类型名，去代替原有的类型名
        typedef 原类型名 新类型名；

*/

#include <stdio.h>
#include <string.h>

typedef int HP;

struct MyPoint
{
    int x, y;
};

typedef struct MyPoint MP;

typedef struct MyStu
{
    int id;
    char name[16];
    MP m;
} MS;
// 在结构成员列表中，可以使用数据或数组
// 在定义过程中，只是告诉程序该结构类型有什么样的成员，这些成员没有具体内存。只在通过类型给出变量的时候，成员才有具体的值
// 结构数组：是一个数组，数组里面的所有元素是同一样的结构类型

//结构内存对齐
//最大的基本类型的整数倍
struct MyStruct
{
    int i;
    short s;
    char c;


};


int main(void)
{

    // HP hp = 10; // HP 是int 类型的重定义表现

    // MP m = {100, 200};
    // m.x = 20;

    // printf("%d\n",m.x);

    // MS ms = {12, "zhangsan"};

    // int arr[3]; // 整型数组
    // MP m[4];    // 结构数组
    // struct MyPoint m1[2] = {{0, 0}, {1, 1}};
    // m[0].x = 10; // 数组是多个相同数据的集合，用来管理多个数据，找到某个具体的数据，数据是什么该怎么用就怎么用

    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(short));
    printf("%lu\n", sizeof(char));
    printf("\n\n");
    printf("%lu\n", sizeof(struct MyStruct));
    struct MyStruct ms = {1,2,'a'};
    struct MyStruct* pms = &ms;
    return 0;
}