#include<stdio.h>
#include <stdbool.h>
bool findNeg(int* a,int len)
{
	int i,j=0;
	for(i=0;i<len;i++)
	{
		if(a[i]==-1)
		{
			j++;
		}
	}
	if(j==len-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int i,k=1,j,a[17]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17},l;
	for(i=0;i<500;i++)
	{
		if(a[i%17]!=-1)
		{
			if(k%7==0)
			{
				a[i%17]=-1;
			}
			k++;
		}
		if(findNeg(a,17)==true)
		{
			break;
		}
	}
	for(i=0;i<17;i++)
	{
		if(a[i]!=-1)
		{
			j=i;break;
		}
	}
	printf("%d",j);
}

