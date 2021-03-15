#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个整数：");
	scanf("%d",&a);
	printf("这个数的个位是%d，十位是%d，百位是%d",a%10,a%100/10,a/100);
} 


