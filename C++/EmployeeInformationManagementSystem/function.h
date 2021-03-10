#include<iostream>
#include<string.h>
#include<fstream>
using namespace std; 
struct employee
{
	char id[100];
	char name[100];
	char cell[100];
	char salary[100];
	int num; 
};
class EmployeeSystem
{
	private:
		employee people[1000];			
	public:	
		void employeeInit()
		{
			for(int i=0;i<=999;i++)
			{
				strcpy(people[i].cell,"15545197307");
				strcpy(people[i].id,"2020080619");
				strcpy(people[i].name,"哈工程荣誉出品");
				strcpy(people[i].salary,"0");
				people[i].num=0;
			}
			ofstream ofs;
			ofs.open("职工信息.txt",ios::out|ios::binary);
			if(!ofs.is_open())
			{
				cout<<"文件打开失败"<<endl;
			}
			else
			{
				ofs.write((const char *)&people[0],1000*sizeof(people[0]));
				ofs.close();
			}			
		}
		void showMenu()
		{
			cout<<"***************************"<<endl;
			cout<<"哈工程荣誉出品，请勿用作商业用途"<<endl;
			cout<<"***************************"<<endl<<endl<<endl;
			cout<<"*****"<<"1、添加职工信息"<<"*****"<<endl;
			cout<<"*****"<<"2、显示职工信息"<<"*****"<<endl;
			cout<<"*****"<<"3、查询职工信息"<<"*****"<<endl;
			cout<<"*****"<<"4、修改职工信息"<<"*****"<<endl;
			cout<<"*****"<<"5、删除职工信息"<<"*****"<<endl;
			cout<<"*****"<<"0、退出信息系统"<<"*****"<<endl;
		}
		void showAll()
		{
			ifstream ifs;
			employee read[1000];
			ifs.open("职工信息.txt",ios::out|ios::binary);
			if(!ifs.is_open())
			{
				cout<<"文件打开失败"<<endl;
			}
			else
			{
				ifs.read((char*)&read[0],5*sizeof(employee));
				for(int i=0;i<=4;i++)
				{
					cout<<"姓名："<<read[i].name<<endl;
				}
				ifs.close();
			}				
		}
		void addInfo()
		{
			ifstream ifs;
			employee read[1000];//read[1000]是从.dat文件中读出来的所有人员的信息 
			ifs.open("职工信息.txt",ios::out|ios::binary);
			if(!ifs.is_open())
			{
				cout<<"文件打开失败"<<endl;
			}
			else
			{
				ifs.read((char*)&read[0],1000*sizeof(employee));
				if(read[0].num==999)
				{
					cout<<"系统人数已满，请先清理再新建"<<endl;
				}
				else
				{
					cout<<"请输入姓名：";
					cin>>read[read[0].num].name;
					cout<<"请输入工号：";
					cin>>read[read[0].num].id;
					cout<<"请输入电话：";
					cin>>read[read[0].num].cell;
					cout<<"请输入工资：";
					cin>>read[read[0].num].salary;
				}
				for(int i=0;i<=999;i++)
				{
					read[i].num++; 
				}
				ofstream ofs;
				ofs.open("职工信息.txt",ios::out|ios::binary);
				if(!ofs.is_open())
				{
					cout<<"文件打开失败"<<endl;
				}
				else
				{
					ofs.write((const char *)&read[0],1000*sizeof(read[0]));
					ofs.close();
				}
				ifs.close();
			}				
		}
};
