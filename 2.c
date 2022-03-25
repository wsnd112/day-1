//输入一元二次方程的三个系数求方程的根
#include <stdio.h>
#include<math.h>
int main()
{
	/**********Bigin**********/
	float a, b, c;
	float x1, x2;
	scanf("%f,%f,%f", &a, &b, &c);
	if ((b * b - 4 * a * c) > 0)
	{
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		printf("x1=%.5f\n", x1);
		printf("x2=%.5f", x2);
	}
	else if ((b * b - 4 * a * c) == 0)
	{
		x1 = x2 = (-b) / (2 * a);
		printf("x1=x2=%.5f", x1);
	}
	else
	{
		printf("x1=%.5f+%.5fi\n", (-b) / (2 * a), (sqrt(-(b * b - 4 * a * c))) / (2 * a));
		printf("x2=%.5f-%.5fi", (-b) / (2 * a), (sqrt(-(b * b - 4 * a * c))) / (2 * a));
	}
	/**********End**********/
	return 0;
}