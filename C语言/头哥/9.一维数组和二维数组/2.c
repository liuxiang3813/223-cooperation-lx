#include<stdio.h>
int main(void)
{
    int n, a;
    scanf("%d",&n);
    int arr[n];
    //ÊäÈëÊı×é
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);

    int j = 0;
    while (j < n)
    {
        if (arr[j] == a)
        {
            printf("%d",j+1);
            return 0;
        }
        else
        {
            j++;
        }
    }
    printf("-1");

    return 0;
}