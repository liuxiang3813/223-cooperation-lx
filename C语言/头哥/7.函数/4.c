#include<stdio.h>
void jie_cheng(int n)
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        // printf("----µÚ%dÂÖ----\n",i);
        long long temp = 1;
        for (int j = 1; j <= i; j++)
        {
            temp *= j;
                // printf("temp = %lld\n", temp);
        }
        sum += temp;
            // printf("sum = %lld\n", sum);
    }
    printf("%lld", sum);
}

int main(void)
{  
    int n;
    scanf("%d", &n);
    jie_cheng(n);
    return 0;
}
