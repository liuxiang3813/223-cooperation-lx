#include<stdio.h>
long long solve(long long n)
{
    long long ret = 1;
    for (int j = 1; j <= n; j++)
    {
        ret *= j;
    }
    return ret;
}
int main(void)
{
    long long n;
    scanf("%lld",&n);
    long long ans=0;
    for(long long i=1;i<=n;i++)
        ans+=solve(i);
    printf("%lld", ans);
    return 0;
}
