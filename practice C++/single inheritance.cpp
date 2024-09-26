#include<iostream>
using namespace std;

class things
{
	public:
		things()
		{
			cout<<"things"<<endl;
		}
};
class yep
{
	public:
	yep()
	{
		cout<<"this";
	}
};
class a: public yep, public things
{
	public:
		a()
		{
		}
};
int main()
{
	a obj;
	a obj1;
};

