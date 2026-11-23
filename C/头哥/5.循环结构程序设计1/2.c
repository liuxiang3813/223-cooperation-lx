#include<stdio.h>

int main(void)
{
    int n, i;
    int total = 1;

    scanf("%d", &n);

    for ( i = 5; i <= n; i += 5)
    {
        total *= i;
    }

    printf("%d\n", total);
    
    return 0;
}