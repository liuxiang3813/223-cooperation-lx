#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);

    int left = 0;
    int right = n - 1;
    int ans = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if(arr[mid] == m)
        {
            ans = mid;
            right = mid - 1;
        }
        else if (arr[mid] < m)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }  
    }

    if (ans != -1)
    {
        printf("%d\n", ans + 1);
    }
    else
    {
        printf("None\n");
    }
    
    return 0;
}