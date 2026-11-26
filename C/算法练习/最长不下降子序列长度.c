#include <stdio.h>

int a[10100];
int dp[10100];
int n;
int res = 0;

int Max(const int a, const int b)
{
    int ret;
    if (a > b)
        ret = a;
    else if (a < b)
        ret = b;
    else
        ret = a;
    return ret;
}

int main(void)
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for (int j = 1; j < i; j++)
        {
            if (a[i] >= a[j])
            {
                dp[i] = Max(dp[j] + 1, dp[i]);
            }
        }
        res = Max(dp[i], res);
    }
    printf("%d", res);
    return 0;
}