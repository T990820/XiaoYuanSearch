#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	gets(str);
	for(int i=0;i<=strlen(str)-1;i++)
	{
		printf("%c",str[strlen(str)-1-i]);
	}
}
