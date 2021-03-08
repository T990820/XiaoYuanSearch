#include<stdio.h>
#include<string.h>
long long pow(int a)
{
	long long b=1;
	for(int i=1;i<=a;i++)
	{
		b=b*10;
	}
	return b;
}
int main()
{
	int num1=0,num2=0,flag=0;
	char ope;
	int len_num1=0,len_num2=0;
	char str[10000];
	gets(str);
	for(int i=0;i<=strlen(str)-1;i++)
	{
		if(str[i]!='+'&&str[i]!='-'&&str[i]!='*'&&str[i]!='/'&&flag==0)
		{
			len_num1+=1;
		}
		else
		{
			flag=1;
		}
	}
	len_num2=strlen(str)-1-len_num1;
	for(int i=1;i<=len_num1;i++)
	{
		num1+=((int)str[i-1]-48)*pow(len_num1-i);
	}
	for(int i=1;i<=len_num2;i++)
	{
		num2+=((int)str[i+len_num1]-48)*pow(len_num2-i);
	}
	if(str[len_num1]=='+')
	{
		printf("%d+%d=%d\n",num1,num2,num1+num2);
	}
	if(str[len_num1]=='-')
	{
		printf("%d-%d=%d\n",num1,num2,num1-num2);
	}
	if(str[len_num1]=='*')
	{
		printf("%d*%d=%d\n",num1,num2,num1*num2);
	}
	if(str[len_num1]=='/')
	{
		float c=float(num1)/float(num2);
		printf("%d/%d=%f\n",num1,num2,c);
	}
}
