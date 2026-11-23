#include<stdio.h>
int main(void)
{
    //创建并输入数组
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }

    //法1：冒泡排序
    BubbleSort(arr);
    printf("\n");
    //法2：选择排序
    SelectionSort(arr);
    printf("\n");
    //法3：插入排序
    InsertionSort(arr);
    printf("\n");
    //法4：希尔排序
    ShellSort(arr);
    printf("\n");
    //法5：快速排序
    QuickSOrt(arr,arr[0],arr[-1]);
    printf("\n");
    
    return 0;
}


//冒泡排序
void BubbleSort(int BubbleS_arr[])
{
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (BubbleS_arr[j] > BubbleS_arr[j+1])
            {
                temp = BubbleS_arr[j];
                BubbleS_arr[j] = BubbleS_arr[j+1];
                BubbleS_arr[j+1] = temp;
            }
            
        }
        
    }
    
    //输出
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ",BubbleS_arr[i]);
    }
}


//选择排序
void SelectionSort(int SelectionS_arr[])
{
    for (int i = 0; i < 10 - 1; i++)
    {
        int k = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (SelectionS_arr[j] < SelectionS_arr[k])
            {
                k = j;
            }
            
        }
        int temp = SelectionS_arr[k];
        SelectionS_arr[k] = SelectionS_arr[i];
        SelectionS_arr[i] = temp;
    }

    //输出
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ",SelectionS_arr[i]);
    }
}

//插入排序
void InsertionSort(int InsertionS_arr[])
{
    int i, j, temp;
    for (i = 1; i < 10; i++)
    {
        if (InsertionS_arr[i] < InsertionS_arr[i-1])
        {
            temp = InsertionS_arr[i];
            for (j = i - 1; j >= 0 && InsertionS_arr[j] > temp; j--)
            {
                InsertionS_arr[j+1] = InsertionS_arr[j];
            }
            InsertionS_arr[j+1] = temp;
        }
        
    }
    
    //输出
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ",InsertionS_arr[i]);
    }
}


//希尔排序
void ShellSort(int ShellS_arr[])
{
    int i, j, increment;
    for (increment = 10 /2; increment > 0; increment /= 2)
    {
        for (i = increment; i < 10; i++)
        {
            int temp = ShellS_arr[i];
            for ( j = i - increment; j >= 0 && temp < ShellS_arr[j]; j -= increment)
            {
                ShellS_arr[j + increment] = ShellS_arr[j];
            }
            ShellS_arr[j + increment] = temp;   
        }   
    }

    //输出
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ",ShellS_arr[i]);
    }
}


//快速排序
void QuickSOrt(int QuickS_arr[], int begin, int end)
{
    int i, j;
    if (begin < end)
    {
        i = begin + 1;
        j = end;
        while (i < j)
        {
            if (QuickS_arr[i] > QuickS_arr[begin])
            {
                int temp;
                temp = QuickS_arr[i];
                QuickS_arr[i] = QuickS_arr[j];
                QuickS_arr[j] = temp;
                j--;
            }
            else
            {
                i++;
            }
        }
        if (QuickS_arr[i] >= QuickS_arr[begin])
        {
            i--;
        }
        int temp;
        temp = QuickS_arr[begin];
        QuickS_arr[begin] = QuickS_arr[i];
        QuickS_arr[i] = temp;
        QuickSOrt(QuickS_arr , begin, i);
        QuickSOrt(QuickS_arr,j,end);
    }

    //输出
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ",QuickS_arr[i]);
    }
}