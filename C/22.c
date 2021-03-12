#include<stdio.h>
float fun(int n)
{
	float res=0.0,i=1.0;
	for(i;i<=n;i++)
	{
		res+=1.0/i/(i+1);
	}
	return res;
} 
int main()
{
	printf("%f",fun(9));
}


