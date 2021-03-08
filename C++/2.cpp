#include<iostream>
#include<string.h>
using namespace std;
class Contacts
{
	private:
		char cell[65535];
		char name[65535];
	public:
		Contacts(){}
		~Contacts(){}
		void setInfo()
		{
			gets(cell);
			while(strlen(cell)!=11||cell[0]<48||cell[0]>57||cell[1]<48||cell[1]>57||cell[2]<48||cell[2]>57||cell[3]<48||cell[3]>57||cell[4]<48||cell[4]>57||cell[5]<48||cell[5]>57||cell[6]<48||cell[6]>57||cell[7]<48||cell[7]>57||cell[8]<48||cell[8]>57||cell[9]<48||cell[9]>57||cell[10]<48||cell[10]>57)
			{
				cout<<"您输入的号码有误，请重新输入"<<endl; 
				gets(cell);
			}
			gets(name);
		}
		void showInfo()
		{
			cout<<"名称："<<name<<endl<<"电话："<<cell[0]<<cell[1]<<cell[2]<<cell[3]<<cell[4]<<cell[5]<<cell[6]<<cell[7]<<cell[8]<<cell[9]<<cell[10]<<endl;
		}
}; 
int main()
{
	Contacts mc;
	mc.setInfo();
	mc.showInfo();
}
