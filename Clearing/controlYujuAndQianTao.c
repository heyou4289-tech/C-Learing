#include <stdio.h>
int main(void)
{

    /*
    控制语句嵌套：
        把控制语句当成一个语句来理解
    */
    int isFind = 0;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            if (i == 2 && j == 5)
            {
                // isFind = 1;
                // break;//跳出j所在循环
                goto MYOVER;
            }
            printf("%d\n", i * 10 + j);
        }
        // if (isFind)
        // {
        //     break;
        // }
        
    }
MYOVER: 
    printf("\n\n\n\n\n");
    // while (1)
    // {
    //     switch (方向的变量)
    //     {
    //     case 上方向:
    //         break;
    //     case 下方向:
    //         break;
        
    //     default:
    //         break;
    //     }
    //     if (如果找到了终点 或者 没有通往终点的路径)
    //     {
    //         break;
    //     }
        
    // }
    

    return 0;
}