#include<stdio.h>
#include<string.h>

int main(void)
{
    char *str = "Hello";
    char word[] = "Hello";
    char line[10] = "Hello";

    char word1[8];
    char word2[8];
    scanf("%s", word1);
    scanf("%s", word2);
    printf("%s##%s##\n", word1, word2);

    return 0;
}