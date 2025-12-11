#include <stdio.h>

enum LEVEL
{
    EXCELLENT,
    GOOD,
    PASS,
    FAIL
};

enum LEVEL getLevel(int score);

int main(void)
{
    int n;
    printf("请输入学生数量：");
    scanf("%d", &n);
    int arr[n];
    int max = 0;
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        int score;
        printf("请输入第%d个学生成绩: ", i + 1);
        scanf("%d", &score);
        arr[i] = score;
        // printf("数值：%d\n", arr[i]);
        if (i == 0)
        {
            max = min = score;
        }
        else
        {
            if (arr[i] > max)
            {
                max = arr[i];
                // printf("%d\n", arr[i]);
            }

            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
    }
    printf("最高分: %d\n", max);
    printf("最低分: %d\n", min);

    return 0;
}

enum LEVEL getLevel(int score)
{
    if (score >= 90)
        return EXCELLENT;
    else if (score >= 75)
        return GOOD;
    else if (score >= 60)
        return PASS;
    else
        return FAIL;
}
