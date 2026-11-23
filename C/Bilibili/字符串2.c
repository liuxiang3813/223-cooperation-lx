#include<stdio.h>
#include<string.h>

int main(void)
{
    char line[] = "Hello";
    printf("strlen=%lu\n", strlen(line));
    printf("sizeof=%lu\n",sizeof(line));

    return 0;
}