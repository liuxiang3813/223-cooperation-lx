#include<stdio.h>
int main()
{
    char ch, ex_ch;
    printf("请输入一个字母：");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        ex_ch = ch + 32;
        printf("%c转换后为：%c\n", ch, ex_ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        ex_ch = ch - 32;
        printf("%c转换后为：%c\n", ch, ex_ch);
    }

    
    return 0;
}