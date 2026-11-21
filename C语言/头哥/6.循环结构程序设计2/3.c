#include<stdio.h>
int main(void)
{
    int n;
    int temp = 1;
    double answer = 0;
    scanf("%d", &n);

    //判断正数、负数、零
    if (n < 0)
    {
        printf("0");
        return 0;
    }
    else if (n == 0)
    {
        printf("1");
        return 0;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            //printf("----第%d轮----\n",i);
            temp = 1;
            for (int j = 1; j <= i; j++)
            {
                temp *= j;
                //printf("temp = %d\n", temp);
            }
            answer += temp;
            //printf("answer = %lf\n",answer);
        }
        printf("%.0lf", answer);
    }
    
    

    return 0;
}