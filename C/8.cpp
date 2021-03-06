#include<stdio.h>
#include<string.h>
int main()
{
	char str[16],str1[16];
	char flag;
    gets(str);
    gets(str1);
    scanf("%c",&flag);
	int k=strlen(str);
	int l=strlen(str1);
	printf("%d %d",k,l);
	for(int i=0;i<=k-1;i++)
	{
		if(str[i]!=flag)
		{
			printf("%c",str[i]);
		}
	}
} 
