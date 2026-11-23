#include<stdio.h>
double calculate_s(int n)
{
    double sum = 1.0;
    double term = 1.0;

    for (int i = 1; i <= n; i++)
    {
        term = term * i / (2.0 * i + 1.0);
        sum += term;
    }
    return sum;
    
}

int main(void)
{  
    int n;
    scanf("%d", &n);
    printf("%.10lf\n", calculate_s(n));
    return 0;
}
