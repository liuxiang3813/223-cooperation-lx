#include<stdio.h>
int main(void)
{
    int number;
    double scores, average;
    double total_scores = 0;
    printf("the number of students:");
    scanf("%d", &number);
    printf("the scores:");
    for (int i = 1; i <= number; i++)
    {
        scanf("%lf", &scores);
        total_scores += scores;
    }
    if (number > 0) average = total_scores / number;
    else average = 0;
    printf("average=%.2lf", average);
    return 0;

}