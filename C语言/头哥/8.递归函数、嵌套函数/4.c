#include<stdio.h>
int Acm(int m,int n)
{
    int ret;
    if(m==0&&n>0)
    {
        ret = n + 1;
    }
    else if(n==0&&m>0)
    {
        Acm(m-1,1);
    }
    else
    {
        Acm(m-1,Acm(m,n-1));
    }
}
int main(void)
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d", Acm(m,n));
    return 0;
}
