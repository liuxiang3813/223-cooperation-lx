/*
题目描述:读入n(1 <= n <= 1000)个学生的成绩，成绩都为整数，用指针函数求出若干个学生成绩的最高分。用数组名作为函数参数，指针作为函数返回值。
*/
#include<stdio.h>
void MaxGrade(int *pGrade, int *pAns)
{
    if (*pGrade > *pAns)
    {
        *pAns = *pGrade;
    }
}
int main(void)
{
    int n,s[110];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&s[i]);
    int ans = 0;
    for (int j = 0; j < n; j++)
    {
        MaxGrade(&s[j], &ans);

    }

    printf("%d",ans );
    return 0;
}