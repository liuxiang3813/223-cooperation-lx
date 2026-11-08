#include<stdio.h>
int main(void)
{
    int a, n, i;
    int term = 0;
    int total = 0;

    scanf("%d %d", &a, &n);

    for ( i = 0; i < n; i++)
    {
        term = term * 10 + a;
        total += term;
    }
    
    printf("%d\n", total);
    return 0;
}