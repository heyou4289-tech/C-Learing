#include <stdio.h>

/*
    程序文件：.c
    数据文件
        分为二进制文件、文本文件


    指向文件的指针
        FILE *p;

    文件相关操作通过库函数完成
        打开文件    fopen (fopen_s)
            打开模式：w 只写   r 只读   a 追加
                    wb 二进制只读   rb  ab
                    w+  r+  a+
        关闭文件    fclose
*/

int main(void)
{
    FILE *pf = NULL;
    pf = fopen("1.txt", "w");
    //fopen(&pf, "1.txt", "w"); Mac不适用
    fwrite("12345", 5, 1, pf);
    fclose(pf);

    return 0;
}