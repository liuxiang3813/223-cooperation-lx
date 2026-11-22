#include<stdio.h>
int main(void)
{
    int arr[10][10];
    int i, j;
    const int size = 10;
    /*
    1 
    1 1 
    1 2 1               2,1 -> 1,0 + 1,1
    1 3 3 1
    1 4 6 4 1 
    1 5 10 10 5 1 
    */
    for (i = 0; i < size; i++)
    {
        // printf("----µÚ%dÂÖ----\n",i);
        // printf("i = %d\n",i);
        arr[i][0] = 1;
        for ( j = 0; j <= i; j++)
        {
            // printf("j = %d\n",j);
            if (i == j)
            {
                arr[i][j] = 1;
                // printf("=\n");
            }
            if (i >= 2 && j >= 1 && i != j)
            {
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
                // printf("!=\n");
            }
        }
        
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}