用嵌套的if-else语句实现求分段函数值
#include<stdio.h>
#define e 2.718
#include<math.h>
int main()
{
	float x;
	scanf("%f", &x);
	/********** Begin **********/
	if (x > 1)
	{
		printf("y=%.2f", pow(e, sqrt(x)) - 1);
	}
	else if (x >= -1 && x <= 1)
	{
		printf("y=%.2f", fabs(x) + 2);
	}
	else
		printf("y=%.2f", sin(x * x));
	/********** End **********/
	return 0;
}
