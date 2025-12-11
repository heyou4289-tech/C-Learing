#include <stdio.h>
#include <string.h>//字符串头文件
int main(void) {

    //c语言中，用字符数组来表示字符串。字符串中用\0来表示字符串结束
    //字符数字要比真正的字符集合要多1，要多1个可以存放\0的位置
    char name[16] = {'z','h','a','n','g'};
    char name1[16] = "zhangsang";//除数组初始化方式之外，字符数组可以直接使用字符串进行初始化
    printf("%s\n", name1);//%s 字符串输出，需要一个字符串的首地址
    printf("\n\n");
    char name2[3][16] = {"zhangsan", "lisi", "wangwu"};//字符二维数组，也是一维的字符串数组
    //数组的降维使用

    //求数组内存大小
    printf("%lu\n", sizeof(name2));
    //求字符串的长度
    printf("%lu\n", strlen(name1));//求字符串长度，从下标0开始，一直到\0，中间有多少个字符
    return 0;
}