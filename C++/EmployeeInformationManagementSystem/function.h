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
				strcpy(people[i].name,"������������Ʒ");
				strcpy(people[i].salary,"0");
				people[i].num=0;
			}
			ofstream ofs;
			ofs.open("ְ����Ϣ.txt",ios::out|ios::binary);
			if(!ofs.is_open())
			{
				cout<<"�ļ���ʧ��"<<endl;
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
			cout<<"������������Ʒ������������ҵ��;"<<endl;
			cout<<"***************************"<<endl<<endl<<endl;
			cout<<"*****"<<"1�����ְ����Ϣ"<<"*****"<<endl;
			cout<<"*****"<<"2����ʾְ����Ϣ"<<"*****"<<endl;
			cout<<"*****"<<"3����ѯְ����Ϣ"<<"*****"<<endl;
			cout<<"*****"<<"4���޸�ְ����Ϣ"<<"*****"<<endl;
			cout<<"*****"<<"5��ɾ��ְ����Ϣ"<<"*****"<<endl;
			cout<<"*****"<<"0���˳���Ϣϵͳ"<<"*****"<<endl;
		}
		void showAll()
		{
			ifstream ifs;
			employee read[1000];
			ifs.open("ְ����Ϣ.txt",ios::out|ios::binary);
			if(!ifs.is_open())
			{
				cout<<"�ļ���ʧ��"<<endl;
			}
			else
			{
				ifs.read((char*)&read[0],5*sizeof(employee));
				for(int i=0;i<=4;i++)
				{
					cout<<"������"<<read[i].name<<endl;
				}
				ifs.close();
			}				
		}
		void addInfo()
		{
			ifstream ifs;
			employee read[1000];//read[1000]�Ǵ�.dat�ļ��ж�������������Ա����Ϣ 
			ifs.open("ְ����Ϣ.txt",ios::out|ios::binary);
			if(!ifs.is_open())
			{
				cout<<"�ļ���ʧ��"<<endl;
			}
			else
			{
				ifs.read((char*)&read[0],1000*sizeof(employee));
				if(read[0].num==999)
				{
					cout<<"ϵͳ���������������������½�"<<endl;
				}
				else
				{
					cout<<"������������";
					cin>>read[read[0].num].name;
					cout<<"�����빤�ţ�";
					cin>>read[read[0].num].id;
					cout<<"������绰��";
					cin>>read[read[0].num].cell;
					cout<<"�����빤�ʣ�";
					cin>>read[read[0].num].salary;
				}
				for(int i=0;i<=999;i++)
				{
					read[i].num++; 
				}
				ofstream ofs;
				ofs.open("ְ����Ϣ.txt",ios::out|ios::binary);
				if(!ofs.is_open())
				{
					cout<<"�ļ���ʧ��"<<endl;
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
