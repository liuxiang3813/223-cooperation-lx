#include<stdio.h>
int main()
{
    // 法1
    int baiwei, shiwei, gewei;
    int Armstrong;
    for (int i = 100; i < 1000; i++)
    {
        //获取i的百位，十位，个位
        baiwei = i / 100;
        shiwei = (i - baiwei * 100) / 10;
        gewei = i % 10;
        Armstrong = baiwei * baiwei * baiwei + shiwei * shiwei * shiwei + gewei * gewei * gewei - i;
        //判断是否为水仙花数
        if ( Armstrong == 0 )
        {
            printf("%d ", i);
        }
    }

 
    // 法2
    for (int i = 100; i < 1000; i++)
	{
		int sum = 0;
		int temp=i;
		int rem;

		for (int j = 0; j < 3; j++)
		{
			rem = temp % 10;
			temp /= 10;
			sum += rem * rem * rem;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
   
    return 0;
}   