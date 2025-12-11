#include <stdio.h>
int main(void)
{
    /*

        流程控制语句
        选择
            if语句 =》如果
            后面跟圆括号，圆括号中一般是关系表达式或者逻辑表达式，如果是算术表达式，非0即为true
            语句后面可以跟一条语句，也可以跟复合语句

            if else 语句 =》如果 否则
    */

    int NpcHp;
    scanf("%d", &NpcHp);
    if (NpcHp <= 0)
    {//花括号内为符合语句，当一条语句来执行
        printf("npc die\n");
        printf("the 道具 fall");
    } else {
        printf("npc att\n");
    }
    return 0;
}