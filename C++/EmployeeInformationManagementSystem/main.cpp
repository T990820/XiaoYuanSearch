#include<iostream>
#include"function.h"
using namespace std;
int main()
{
	int opt=-1,off_on=1;
	EmployeeSystem es;
	//es.employeeInit();
	while(off_on)
	{
		es.showMenu();
		cin>>opt;
		switch(opt)
		{
			case 1:
				es.addInfo();break;
			case 2:
				es.showAll();break;
		}
	}
	//cout<<es.people[0].name<<endl;
}
