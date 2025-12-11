#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN

};
int main(void)
{
    int a;
    enum TrafficLight light = a;
    printf("请输入交通信号灯数字 (0=RED, 1=YELLOW, 2=GREEN):");
    scanf("%d", &a);
    light= a;
    switch (light)
    {
    case RED:
        printf("STOP!\n");
        break;
    case YELLOW:
        printf("Get Ready!\n");
        break;
    case GREEN:
        printf("Go!\n");
        break;
    default:
        printf("Invalid input\n");
        break;
    }
    return 0;
}