#include<stdio.h>
#include<string.h>
int main()
{
	char str[65535];
	gets(str);
	for(int i=0;i<=strlen(str)-1;i++)
	{
		if((int)str[i]>=65&&(int)str[i]<=90)
		{
			str[i]+=32;
		}
		else
		{
			str[i]-=32;
		}
	}
	for(int i=0;i<=strlen(str)-1;i++)
	{
		printf("%c",str[i]);
	}	
} 
