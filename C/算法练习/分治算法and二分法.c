/*
题目描述：
    请在一个有序数组中，找出值x的位置，如果x不在数组，输出-1。
输入：
    第一行，一个整数n，代表数组元素个数
    第二行，n个数，代表数组的n个元素(n<=100000)
    第三行，一个整数x，代表要查找的数。
输出：
    x在数组中的位置。
*/

#include <stdio.h>

int main(void)
{
    int n;
    int arr[100000];
    int x;
    int pos = -1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    int mid = 0, left = 0;
    int right = n - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == x)
        {
            pos = mid + 1;
            break;
        }
        else if (arr[mid] > x)
        {
            right = mid - 1;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
    }
    printf("%d", pos);

    return 0;
}