/*
问题描述：
    一个n*m的迷宫，所有的点都可以走，请你按照 右、下、左、上 的顺讯进行搜索，找出从左上角到右下角的最短路程。

输入：
    一个整数 n(n<=5) ,一个整数m(m<=5)代表迷宫大小。
输出：
    从左上角 1,1 点走到右下角 n,m 点的最短路径
*/

#include<stdio.h>

int t[110][110];
int dp[110][110];
int n;

int Max(const int a, const int b)
{
    int ret;
    if(a>b)
    {
        ret = a;
    }
    else if (a<b)
    {
        ret = b;
    }
    else
    {
        ret = a;
    }
    return ret;
}

void DP()
{
    for (int j = 1; j <= n;j++)
    {
        dp[n][j] = t[n][j];
    }
    for (int i = n - 1; i >= 1;i--)
    {
        for (int j = 1; j <= i;j++)
        {
            dp[i][j] = t[i][j] + Max(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }
}

int main(void)
{
    scanf("%d", &n);
    for (int i = 1; i <= n;i++)
    {
        for (int j = 1; j <= i;j++)
        {
            scanf("%d", &t[i][j]);
        }
    }
    DP();
    printf("%d", dp[1][1]);
    return 0;
}