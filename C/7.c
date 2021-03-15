#include<stdio.h>
#define PI 3.1415926535
int main()
{
	float r;
	printf("请输入圆的半径：");
	scanf("%f",&r);
	printf("周长是：%f，面积是：%f",2*PI*r,PI*r*r);
} 
