#include<stdio.h>
int main(void)
{
    double answer = 0;
    int minus = 0;

    for (double i = 1; i <= 100; i++)
    {
        // printf("----µÚ%dÂÖ----\n", i);
        if (minus == 0)
        {
            answer += 1.0/i;
            minus = 1;
            // printf("·û:+\n");
            // printf("1/i = %lf\n", 1.0/i);
        }
        else
        {
            answer -= 1/i;
            minus = 0;
            // printf("·û:-\n");
            // printf("1/i = %lf\n", 1/i);
        }
        // printf("answer = %ld\n", answer);
    }
    printf("%.3lf",answer);
    return 0;
}