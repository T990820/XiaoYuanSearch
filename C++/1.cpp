#include<iostream>
using namespace std;
class myCalculator
{
	private:
		float a;
		float b;
		int result;
	public:
		myCalculator()
		{
		}
		~myCalculator()
		{
		}
		void getAB()
		{
			cout<<"Please enter one:";
			cin>>a;
			cout<<"Please enter two:";
			cin>>b;
		}
		void Add()
		{
			cout<<"one+two="<<a+b<<endl;
		}
		void Sub()
		{
			cout<<"one-two="<<a-b<<endl;
		}
		void Mul()
		{
			cout<<"one*two="<<a*b<<endl;
		}
		void Div()
		{
			float c;
			c=a/b;
			cout<<"one/two="<<c<<endl;
		}
		void Clear()
		{
			a=0;
			b=0;
			result=0;
		}
}; 
int main()
{
	myCalculator mc;
	mc.getAB();
	mc.Add();
	mc.Sub();
	mc.Mul();
	mc.Div();
}
