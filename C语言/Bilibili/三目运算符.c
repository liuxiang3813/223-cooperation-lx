#include<stdio.h>
int main()
{
    int count;
    scanf("%d",&count);
    count = (count > 20) ? count - 10 : count + 10; 

    if (count > 20)
    {
        count = count - 10;
    }
    else
    {
        count = count + 10;
    }
    return 0;
    
}