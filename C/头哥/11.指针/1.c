/*
题目描述:用指针法输入12个整数，然后按每行4个数输出
*/
#include<stdio.h>
int main(void)
{
    int arr[12];
    int *p;

    // 输入
    for (p = arr; p < arr + 12; p++)
        scanf("%d", p);

    for (p = arr; p < arr + 12; p++)
    {
        printf("%d", *p);
        if ((p-arr) % 4 == 3)
            printf("\n");
        else
            printf(" ");
    }
    return 0;
}