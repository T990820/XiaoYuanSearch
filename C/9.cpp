#include<stdio.h>
int main()
{
	int a,b,c,d[3],e;
	scanf("%d %d %d",&a,&b,&c);
	d[0]=a;
	d[1]=b;
	d[2]=c;
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=1;j++)
		{
			if(d[j]<=d[j+1])
			{
				e=d[j];
				d[j]=d[j+1];
				d[j+1]=e;
			}
		}
	}
	printf("max=%d",d[0]);
} 
