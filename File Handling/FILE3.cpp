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
	fstream arko_file;
	arko_file.open("data2.txt",ios::in);
	arko_file.seekg(0);
	while(!arko_file.eof())
	{
		arko_file.read((char*)&obj1,sizeof(obj1));
		cout<<obj1.name<<endl;
		cout<<obj1.roll<<endl;
		cout<<obj1.marks<<endl;
	}
	arko_file.close();
	return 0;
}
