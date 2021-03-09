#include<stdio.h>
int main()
{
	char a,b,c,d,e,f;
	printf("ÇëÊäÈëÃÜÂë£º");
	scanf("%c%c%c",&a,&b,&c);
	if(a+3>122){d=a-23;}else{d=a+3;}
	if(b+3>122){e=b-23;}else{e=b+3;}
	if(c+3>122){f=c-23;}else{f=c+3;}
	printf("ÃÜÂëÊÇ£º%c%c%c",d,e,f);
}
