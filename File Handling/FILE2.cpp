#include<iostream>
#include<fstream>

using namespace std;

class A
{
	public:
		char name[100];
		int roll;
		int marks;
};
int main()
{
	A obj1;
	fstream read_file;
	read_file.open("datas.txt",ios::in);
	read_file.seekg(0);
	while(!read_file.eof())
	{
		read_file.read((char*)&obj1,sizeof(obj1));
		cout<<obj1.name<<endl;
		cout<<obj1.roll<<endl;
		cout<<obj1.marks<<endl;
	}
	read_file.close();
	return 0;
}
