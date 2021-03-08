#include<stdio.h>
int main()
{
	int year,month,day,days;
	scanf("%d%d%d",&year,&month,&day);
	if(year%4==0)
	{
		switch(month)
		{
			case 1:days=day;break;
			case 2:days=31+day;break;
			case 3:days=60+day;break;
			case 4:days=91+day;break;
			case 5:days=121+day;break;
			case 6:days=152+day;break;
			case 7:days=182+day;break;
			case 8:days=213+day;break;
			case 9:days=244+day;break;
			case 10:days=274+day;break;
			case 11:days=305+day;break;
			case 12:days=335+day;break;
		}
	}
	else
	{
		switch(month)
		{
			case 1:days=day;break;
			case 2:days=31+day;break;
			case 3:days=59+day;break;
			case 4:days=90+day;break;
			case 5:days=120+day;break;
			case 6:days=151+day;break;
			case 7:days=181+day;break;
			case 8:days=212+day;break;
			case 9:days=243+day;break;
			case 10:days=273+day;break;
			case 11:days=304+day;break;
			case 12:days=334+day;break;
		}
	}
	printf("%d",days);
} 
