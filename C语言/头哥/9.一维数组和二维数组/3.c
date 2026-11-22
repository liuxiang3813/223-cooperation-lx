#include<stdio.h>
int main(void)
{
    int m, n;
    int max = 0;
    int row, col;
    printf("Input m, n:");
    scanf("%d,%d",&m, &n);
    int arr[m][n];
    //ÊäÈëÊı×é
    printf("Input %d*%d array:",m,n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                row = i+1;
                col = j+1;
            }
        }
    }

    printf("max=%d, row=%d, col=%d", max, row, col);

    return 0;

}