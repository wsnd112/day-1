#include<stdio.h>
int main()
{
	int year;
	//printf("请输入年份:");
	scanf("%d",&year);
	//闰年的判定标准：能被4整除但不能被100整除，或者能被400整除
	/********** Begin **********/
	if((year%4==0&&year%100!=0)||year%400==0)
	{
		printf("%d年是闰年。",year);
	}
	else
	{
		printf("%d年不是闰年！",year);
	}
	/********** End **********/
	return 0;
}
