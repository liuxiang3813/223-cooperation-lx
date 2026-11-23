#include <stdio.h>

int main(void)
{
    int m, n;
    int a[10][10];
    int found = 0;

    if (scanf("%d %d", &m, &n) != 2)
        return 0;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < m && !found; i++)
    {
        for (int j = 0; j < n; j++) {
            int isRowMax = 1, isColMin = 1;

            /* 判断 a[i][j] 是否为第 i 行的最大值 */
            for (int k = 0; k < n; k++)
                if (a[i][k] > a[i][j]) 
                {
                    isRowMax = 0;
                    break;
                }
            if (!isRowMax)
                continue;

            /* 判断 a[i][j] 是否为第 j 列的最小值 */
            for (int k = 0; k < m; k++)
                if (a[k][j] < a[i][j])
                {
                    isColMin = 0;
                    break;
                }

            if (isColMin)
            {
                printf("Array[%d][%d]=%d\n", i, j, a[i][j]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("None\n");

    return 0;
}