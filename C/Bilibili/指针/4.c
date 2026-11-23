#include<stdio.h>
int divide(int a, int b, int *p_result)
{
    int ret = 1;
    if (b == 0) ret = 0;
    else
    {
        *p_result = a/b;
    }
    return ret;
}

int main(void)
{
    int a = 5;
    int b = 2;
    int result;
    if (divide(a, b, &result))
    {
        printf("%d/%d=%d\n", a, b, result);
    }
    return 0;
}