/*
题目描述:对输入的两个整数a，b，用指针变量作为函数参数，交换a和b的值。
*/
#include<stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a,&b);
    printf("%d %d", a, b);

    return 0;
}

void swap(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}