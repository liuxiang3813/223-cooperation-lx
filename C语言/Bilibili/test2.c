#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    srand(time(0));
    int number = rand() % 100 + 1;
    int count = 0;
    int a = 0;
    printf("我已经想好了一个1-100之间的数。\n");
    do
    {
        printf("请猜猜这个数：");
        scanf("%d", &a);
        count++;
        if (a > number)
            printf("你猜的数太大了。");
        else if (a < number)
            printf("你猜的数太小了。");
    } while (a != number);
    printf("太好了！你只用了%d次就猜中了正确答案：%d", count, number);
    return 0;
    
}