/*
题目描述:输入一个字符串，输出反序后的字符串。
*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[1000];
    int len, i, j;
    char t;

    len = (int)strlen(s);

    for (i = 0, j = len - i; i < j; i++, j--)
    {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }

    printf("%s",s);
 
    return 0;
}