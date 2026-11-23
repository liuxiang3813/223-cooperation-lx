#include<stdio.h>
#include<math.h>
int isPrime(int i)
{
    int ret = 1;
    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
        {
            ret = 0;
            break;
        }     
    }
    return ret;
}

int isPrime2(int x)
{
    int ret = 1;
    int i;
    if (x == 1 || (x%2 == 0 && x != 2))
        ret = 0;
    for ( i = 3; i < sqrt(x) ; i+=2)
    {
        if (x % i == 0)
        {
            ret = 0;
            break;
        }
        
    }
    return ret;

}

int main()
{
    int M, N;
    int count = 0;
    int sum = 0;

    scanf("%d,%d", &M, &N);
    if (M == 1) M = 2;
    for(int i = M; i <= N; i++)
    {
        //ÅÐ¶ÏiÊÇ·ñÎªËØÊý
        if (isPrime(i))
        {
            count++;
            sum += i;
            printf("%d ",i);
        }        
    }

    printf("\n%d,%d",count,sum);
    return 0;
}