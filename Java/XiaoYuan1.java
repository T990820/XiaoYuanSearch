public class XiaoYuan1
{
	public static void main(String[] args)
	{
		double salary = 0;
		java.util.Scanner s = new java.util.Scanner(System.in);
		System.out.print("请输入您的当月利润：");
		double profit = s.nextDouble();
		if(profit<100000 || profit==100000)
		{
			salary = profit*0.1;
		}
		else if(profit<200000 || profit==200000)
		{
			salary = 10000 + (profit - 100000) * 0.075;
		}
		else if(profit<400000 || profit==400000)
		{
			salary = (profit - 200000) * 0.05;
		}
		else if(profit<600000 || profit==600000)
		{
			salary = (profit - 400000) * 0.03;
		}
		else if(profit<1000000 || profit==1000000)
		{
			salary = (profit - 600000) * 0.015;
		}
		else
		{
			salary = (profit - 1000000) * 0.01;
		}
		System.out.printf("您的奖金为：%.4f元", salary );
	}
}