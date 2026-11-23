/*
题目描述:有n人围成一圈，顺序排号。从第1个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来的第几号的那位。
*/

#include<stdio.h>
int main(void)
{
    int n, i, cnt = 0, out = 0;
    int a[1000];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        a[i] = 1;

    i = 0;
    while (out < n-1)
    {
        if (a[i])
        {
            cnt++;
            if (cnt == 3)
            {
                a[i] = 0;
                out++;
                cnt = 0;
            }
        }
        i = (i+1) % n;
    }

    for(i = 0; i < n; i++)
    {
        if(a[i])
        {
            printf("%d\n", i + 1);
            break;
        }
    }
    

    return 0;
}