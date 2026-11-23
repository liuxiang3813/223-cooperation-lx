#include <stdio.h>

int main(void)
{
    int ch;
    int letters = 0, digits = 0, spaces = 0, others = 0;

    while ((ch = getchar()) != '\n') {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            letters++;
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if (ch == ' ')
            spaces++;
        else
            others++;
    }
    printf("%d %d %d %d\n", letters, digits, spaces, others);
    return 0;
}