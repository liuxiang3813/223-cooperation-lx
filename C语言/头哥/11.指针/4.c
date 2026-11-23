/*
题目描述:用一个函数实现两个字符串的比较，即自己写一个strcmp函数
*/
#include<stdio.h>
int strcmp(char *p1,char *p2)
{
    int ret = 0;
	if (*p1 > *p2)
    {
        ret = 1;
    }
    return ret;
}
int main(void)
{
	char a[110],b[110];
	scanf("%s%s",a,b);
	if(strcmp(a,b)>0)
		printf("%s", a);
	else
		printf("%s", b);


    return 0;
}