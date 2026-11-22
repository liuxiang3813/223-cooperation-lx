#include<stdio.h>
void solve(int n)
{
    printf("%d", n%10);
    n /= 10;
    if(n>0) solve(n);
}
int main(void)
{
    int n;
    scanf("%d",&n);
    solve(n);
    return 0;
}
