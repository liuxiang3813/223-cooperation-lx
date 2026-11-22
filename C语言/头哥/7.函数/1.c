#include<stdio.h>
void sum(int n)
{
    n = (1 + n) * n / 2;
    printf("%d",n);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    sum(n);
    return 0;
}