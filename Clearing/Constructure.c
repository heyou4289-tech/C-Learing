#include <stdio.h> //标准输入输出

// 函数 实现一个特定功能的代码块
// 相同的代码（功能）可以封装成函数
/*

函数包含：
    函数返回值类型 功能执行之后是否得到一个结果，可以有，也可以没有
        void 无类型，不用返回（不需要结果）。如果需要结果，要通过return加表达式进行返回
    函数名
        用来表示是哪个函数（功能块）
    参数列表
        用来表示在这个函数中需要用到什么样的参数，多少个什么参数,多个参数用逗号隔开
    函数体
        用来表示这个函数中怎么去执行代码，得到这个功能

    调用：函数名（实参列表）；

    调用条件：
        1、库函数先导头文件
        2、自定义函数，要么先定义，要么在使用之前先声明
            声明格式：
                函数返回值类型 函数名（形掺列表

*/

// 定义了一个函数（方法），功能是对数组进行循环的输出
/*
类型名 函数名（函数参数1，函数参数2……）{
    函数体;
    return;
}
*/
void printfArr(int a[], int n)
{
    // 函数体
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}

int myAdd(int a, int b)
{

    return a + b;
}

// 函数定义时，参数列表中的参数是形式参数，理解为代指某一个类型的变量
// 用处：在函数体中，需要去描述一个数据变量的流程，但这个定义中又没有具体的数据，所以需要一个形式意义的参数去表现在函数体中该参数的变化过程
//  void swapInt(int a, int b)
//  {

//     int c = a;
//     a = b;
//     b = c;
//     //printf("a = %d, \tb = %d\n", a, b);

// }

void swapInt(int *a, int *b)
{

    int c = *a;
    *a = *b;
    *b = c;
    // printf("a = %d, \tb = %d\n", a, b);
}

void testFun(void) // 无参，在c语言中，要用void表示无参，无参就没形参和实参的区分
{

    printf("test fun \n");
}

void printfArr123(int a[], int n) // 数组做为函数的参数时，传入的数组名其实就是数组的首地址，因此可以省略数组的最高维
{
    // printf("a: size = %lu\n", sizeof(a));
    for (int i = 0; i < n; i++)
    {
        a[i] += 100;
    }
}

int main(void)
{

    int arr[3] = {1, 2, 3};
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }
    printfArr(arr, 3); // 函数调用

    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("\n\n\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", arr1[i]);
    // }
    printfArr(arr1, 10); // 函数调用

    printf("\n\n\n");

    printf("%d\n", myAdd(2, 5)); // printf也是函数，库函数在调用时，必须先导头文件
    printf("\n\n\n");

    int num1 = 10;
    int num2 = 5;
    // int tempVal = num1;
    // num1 = num2;
    // num2 = tempVal;

    // swapInt(num1, num2);//在调用过程中，参数列表中的叫实际参数，表现实际操作的是哪些参数
    swapInt(&num1, &num2);
    printf("num1 = %d, \tnum2 = %d\n", num1, num2);
    // 实参传递给形参时，会发生拷贝。num1 传递给 a 时，会把num1的值拷贝一份给到a
    // 值传递：实参传递给形参，传递值（形参做的操作并不会改变实参）
    // 址传递：传递是一个地址，在函数内部通过地址的方式可以去修改实参

    printf("\n\n\n");
    testFun(); // 在调用时，也没有实参列表
    printf("\n\n");

    int arr123[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%lu\n", sizeof(arr123));
    printfArr123(arr123, 10);
    printf("\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr123[i]);
    }

    return 0;
}