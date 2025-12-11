#include <stdio.h>
#include <string.h> //字符串处理库函数的头文件
/*

    strlen 求字符串长度
    strcpy(strcpy_s) 拷贝字符串
    strcat(strcat_s）字符串的链接
    strcmp 字符串比较。返回值为0表示两字符串相等，返回值为1，表示参数1比参数2大。返回值 -1, 参数1比参数2小
        比较过程是依次从第1个字符开始比如，如果有大小，返回1或-1，如果相等就比较下一个字符，依此类推2
    strstr 求子串

    1、该函数是表示什么功能
    2、参数表示什么意思
    3、返回值表示什么意思

*/

int main(void)
{
    // char name[16] = "zhangsan";
    // printf("%lu\n", sizeof(name));
    // printf("%zu\n", strlen(name));
    // printf("%s\n", name); // c语言格式化输出 %s 输出字符串
    // // fgets(name, sizeof(name), stdin); // 字符串的输入
    // // puts(name);                       // 字符串的输出
    // char cArr[16];
    // fgets(cArr, sizeof(cArr), stdin);
    // // for (int i = 0; i < 16; i++)
    // // {
    // //     cArr[i] = name[i];
    // // }
    // // puts(cArr);

    // // 参数1表示目标的字符串，参数2表示拷贝多少字符串，参数3表示资源的字符串
    // // strcpy_s(cArr, name, sizeof(cArr));//mac用不了

    // // 参数1表示目标的字符串，连接到参数1的后面，参数2表示参数1的内存空间，参数3表示需要链接的字符串
    // // strcat_s(cArr, 32, "12345");//mac用不了
    // // puts(cArr);

    // cArr[strcspn(cArr, "\n")] = '\0';

    // if (strcmp(cArr, "zhangsan") == 0)
    // {
    //     printf("==\n");
    // }
    // else if (strcmp(cArr, "zhangsan") > 0)
    // {
    //     printf("1 > 2\n");
    // }
    // else // strcmp < 0
    // {
    //     printf("1 < 2\n");
    // }

    char cArr[32] = "abcdabc";
    printf("%s\n", strstr(cArr,"abc"));

    return 0;
}