#include<stdio.h>
int main(void)
{
    int s[110] = {1,2,3,4,5,6,7,8,9,0};
    int lenth = sizeof(s) / sizeof(s[0]);
    printf("%d", lenth);
    return 0;

    

}