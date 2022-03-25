用switch语句实现对输入的数字1~7转换成文字星期几，对其它数字不转换
#include <stdio.h>
int main()
{
	/********** Begin **********/
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("Monday");
		break;
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("Wednesday");
		break;
	case 4:
		printf("Thursday");
		break;
	case 5:
		printf("Friday");
		break;
	case 6:
		printf("Saturday");
		break;
	case 7:
		printf("Sunday");
		break;
	default:
		printf("error");
		break;
	}
	/********** End **********/
	return 0;
}