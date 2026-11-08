#include<stdio.h>

int main(void)
{
    double M, h;
    double s = 0.0;
    int N,i;

    scanf("%lf%d", &M, &N);

    h = M;
    for(i = 0; i < N; i++)
    {
        s += h;
        h /= 2.0;
        if(i < N -1)
        {
            s += h;
        }
    }

    printf("%.2f %.2f\n", h, s);
    return 0;
}