#include<stdio.h>
#include<string.h>
struct student
{
	int id; 
	int score;
};
int is_prime(int a)
{
	int i=2,flag=0;
	for(i;i<=a-1;i++)
	{
		if(a%i==0)
		{
			flag=1;
		}
	}
	return flag;
}
int main()
{
	int m,n,i=0,j=0,k=2;
	printf("��ֱ�����ѧ������������Ϸ�������м��ÿո����\n");
	scanf("%d %d",&m,&n);
	struct student s[m];
	struct student s_bd;
	for(i;i<=m-1;i++)
	{
		s[i].score=0;
		printf("�������%dλͬѧ��ѧ��:",i+1);
		scanf("%d",&(s[i].id));
	}
	i=0,j=0;
	for(i;i<=m+10;i++)
	{
		for(j;j<=m-2;j++)
		{
			if(s[j].id>s[j+1].id)
			{
				s_bd=s[j];
				s[j]=s[j+1];
				s[j+1]=s_bd;
			}
		}
		j=0;
	}
	i=0,j=0;
	for(i;i<=n-1;i++)
	{
		for(j;j<=m-1;j++)
		{
			if(is_prime(k)==0)
			{
				s[j].score+=2;
			}
			else
			{
				s[j].score+=1;
			}
			k++;
		}
	}
	i=0;
	for(i;i<=m-1;i++)
	{
		printf("ѧ��Ϊ%d��ͬѧ�ĵ÷���:%d��\n",s[i].id,s[i].score);
	}
}


