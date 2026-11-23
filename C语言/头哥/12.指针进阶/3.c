/*
题目描述:有n个整数，要求你编写一个函数使其向右循环移动m个位置
*/
#include<stdio.h>
int *solve(int *s,int n,int m)
{
    /*********Begin*********/
    int temp[110];
    for (int i = 0; i < m; i++)
    {
        int temp = s[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            s[j] = s[j - 1];
        }
        s[0] = temp;
    }
    /*********End**********/
}
int main(void)
{
    int n,m,s[110];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d",&s[i]);
    int *ans;
    /*********Begin*********/
    solve(s, n, m);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d",s[i]);
        }
        else
        {
            printf(" %d",s[i]);
        }
    }
    /*********End**********/
    // for(int i=0;i<n;i++){
    //     if(i==0)    printf("%d",*ans++ );
    //     else    printf(" %d",*ans++ );
    // }
    return 0;
}