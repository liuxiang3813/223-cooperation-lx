#include<stdio.h>
int main(void)
{
    int num;
    int product = 1;
    scanf("%d", &num);
    if (num == 0)
    {
        printf("0\n");
        return 0;
    }

    while (num > 0)
    {
        int digit = num % 10;
        product *= digit;
        num /= 10;
    }
    
    printf("%d\n", product);

    return 0;
}