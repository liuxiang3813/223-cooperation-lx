#include<stdio.h>
void solve()
{
    int s, y=0;
    for (int i = 200; i <= 3000; i++)
    {
        s = i;
        y = 0;
        while (s > 0)
        {
            y = y * 10 + s % 10;
            s /= 10;
        }
        if (y == i)
        {
            printf("%d\n",i);
        }
    }
    

}
int main(void)
{  
    solve();
    return 0;
}
