/*
题目描述:采用指针变量表示地址的方法输入输出数组中的个元素
*/
#include<stdio.h>
int main(void)
{
    int a[100];
    int n, i;
    int *p;
    scanf("%d", &n);
    for ( p = a; p < a + n; p++)
    {
        scanf("%d", p);
    }
    for (p = a; p < a + n; p++)
    {
        printf("%d ", *p);
    }
    

    return 0;
}