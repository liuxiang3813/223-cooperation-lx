#include<stdio.h>
int main(void)
{
    int arr[10];
    int maxID = 0;

    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    //找出最大元素下标
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > arr[maxID])
        {
            maxID = i;
        }
    }

    //将最大元素之后的元素向前移一位
    for (int i = maxID; i < 9; i++)
    {
        arr[i] = arr[i+1];
    }

    //输出删除后的9个元素
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}