#include<stdio.h>
int main()
{
	int N,X[10000],Y[10000];
	int N_or_Y=0;//N_or_Y=0ʱ��ʾ�޽� 
	scanf("%d",&N);
	for(int i=0;i<=9999;i++)//��ʼ���⼯ 
	{
		X[i]=0;
		Y[i]=0;
	}
	for(int i=0;i<=N;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(i*i+j*j==N)
			{
				X[N_or_Y]=i;Y[N_or_Y]=j;N_or_Y++;
			}
		}
	}
	if(N_or_Y==0)
	{
		printf("No Solution\n");
	}
	else
	{
		for(int i=N_or_Y-1;i>=0;i--)
		{
			printf("%d %d\n",Y[i],X[i]);
		}
	}
} 
