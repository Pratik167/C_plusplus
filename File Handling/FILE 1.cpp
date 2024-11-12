#include<iostream>
#include<fstream>
using namespace std;

class A
{
	public:
		char name[100];
		int roll;
		int marks;
		
	public:
	A()
	{
		cout<<"Enter Name:";
		cin.getline(name,100);
		cout<<"Enter Roll:";
		cin>>roll;
		cout<<"Enter Marks:";
		cin>>marks;
	}
};
int main()
{
	A obj;
	fstream input_in_file;
	input_in_file.open("datas.txt",ios::app);
	input_in_file.write((char*)&obj,sizeof(obj));
	input_in_file.close();
	return 0;
}
