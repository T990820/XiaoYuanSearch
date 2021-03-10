#include<stdio.h>
#include<string.h>
int main()
{
	int location[3];//表示3个字母在你输入的字符串之中的位置 
	int j=0;//标定数组location的第几位 
	char str[655];
	gets(str);
	printf("%d",strlen(str));
	for(int i=0;i<=strlen(str)-1;i++)
	{
		if(str[i]>96&&str[i]<123)
		{
			location[j]=i;
			j++; 
		}	
	} 
	printf("%d,%d,%d\n",str[location[0]],str[location[1]],str[location[2]]);
	printf("%c,%c,%c\n",str[location[0]]-32,str[location[1]]-32,str[location[2]]-32);
} 
