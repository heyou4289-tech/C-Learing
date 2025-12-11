#include <stdio.h>
int main(void) {
    /*
        switch 后面跟圆括号。圆括号里面一般算术表达式，有一个整数结果
        通过空上整数结果去 case 语句去匹配相应的数值，决定执行哪个分支
        如果和所有case匹配不上，则执行default分支
        注意：case只是表示一个分支的入口，switch后面花括号内所有语句都是内容。会从分支入口一直执行到花括号的结束
        如果需要只执行某一个分支就结束，就需要搭配break语句来使用

        if else if 与 switch 的区别
                if else if 适用于范围表示
                switch 适用于值表示
    */

   int val;
   scanf("%d", &val);
   switch (val)
   {
   case 9:
    printf("A\n");
    break;
   case 7:
    printf("B\n");
    break;
   default:
    printf("C\n");
    break;
    
   }
   return 0;

}