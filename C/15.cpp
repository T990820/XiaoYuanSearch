#include<stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d %d",&a,&b);
	c=(a%100)/10+a%10*100+((b%100)/10)*10+1000*(b%10);
	printf("%d",c);	
} 
