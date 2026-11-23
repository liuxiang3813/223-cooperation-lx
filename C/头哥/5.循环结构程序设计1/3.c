#include<stdio.h>
int main(void)
{
    int m, n, a, b, t;
    int gcd, lcm;

    scanf("%d %d",&m, &n);

    // gcd
    a = m;
    b = n;
    while (b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    gcd = a;

    // lcm
    lcm = m / gcd * n;
    
    printf("最大公约数是:%d\n", gcd);
    printf("最小公倍数是:%d\n", lcm);

    return 0;
}