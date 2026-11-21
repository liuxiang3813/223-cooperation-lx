#include<stdio.h>
int main()
{
    int M, N;
    int count = 0;
    int sum = 0;

    scanf("%d,%d", &M, &N);
    for(int i = M; i <= N; i++)
    {
        int isPrime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
            
        }
        //ÅÐ¶ÏiÊÇ·ñÎªËØÊý
        if (isPrime)
        {
            count++;
            sum += i;
            printf("%d ",i);
        }        
    }

    printf("\n%d,%d",count,sum);
    return 0;
}