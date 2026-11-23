#include<stdio.h>
int sum_of_divisors(int n)
{
    int sum = 0;

    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    
    return sum;
}


int main(void)
{
    for (int a = 1; a <= 3000; a++)
    {
        int b = sum_of_divisors(a);
        if (b > a && b <= 3000)
        {
            int n = sum_of_divisors(b);
            if (n == a)
            {
                printf("(%d,%d)", a, b);
            }
        }
    }
}