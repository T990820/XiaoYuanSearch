#include<stdio.h>
int main()
{
	int n,A[6][6],sum1=0,sum2=0;
	printf("请输入n阶方阵的维数：");
	scanf("%d",&n);
	if(1<n&&n<=6)
	{
		for(int i=0;i<=n-1;i++)
		{
			for(int j=0;j<=n-1;j++)
			{
				printf("请输入a%d%d=",i+1,j+1);
				scanf("%d",&A[i][j]);
			}
		}
		for(int i=0;i<=n-1;i++)
		{
			sum1+=A[i][i];
			sum2+=A[i][n-1-i];
		}
		printf("主对角线元素之和是%d，副对角线元素之和是%d\n",sum1,sum2);
	}
	else
	{
		printf("n超出范围，请重新输入\n");
	}	
}
