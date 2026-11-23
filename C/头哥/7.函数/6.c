#include<stdio.h>
//最大公约数GCD
long long int gcd(long long int a, long long int b)
{
    while (b != 0)
    {
        long long int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

//最小公倍数LCM
long long int lcm(long long int a, long long int b)
{
    return a / gcd(a, b) * b;
}

int main(void)
{
    long long int num1, num2;

    scanf("%lld %lld", &num1, &num2);
    if (num1 < 0 || num2 < 0)
    {
        printf("Input Error");
    }
    else
    {
        printf("%lld %lld", gcd(num1,num2), lcm(num1,num2));
    }
}