#include <stdio.h>

int a[100010];
int dp[100010];
int n;

int Max(const int a, const int b)
{
    int ret;
    if (a > b)
    {
        ret = a;
    }
    else if (a < b)
    {
        ret = b;
    }
    else
    {
        ret = a;
    }
    return ret;
}

int main(void)
{
    scanf("%d", &n);
    for (int i = 1; i <= n;i++)
    {
        scanf("%d", &a[i]);
    }
    dp[1] = a[1];
    int global_max = dp[1];
    for (int i = 2; i <= n;i++)
    {
        dp[i] = Max(dp[i - 1] + a[i], a[i]);
        global_max = Max(dp[i], global_max);
    }
    printf("%d", global_max);

    return 0;
}