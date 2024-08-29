
#include<iostream>
using namespace std;

class Kist{
	public:
		int a;
	public:
		Kist(int i)
		{
			a=i;
			cout<<a<<" Parent Constructor"<<endl;
		}
		
		~Kist()
		{
			cout<<"Parent Destructor"<<endl;
		}
};

class BIT:public Kist
{
	public:
		int b;
		BIT(int j):Kist(j)
		{
		//	b=j;
			cout<<" Child Constructor"<<endl;
		}
		~BIT()
		{
			cout<<"Child Destructor"<<endl;
		}
};

int main()
{
	BIT obj(99);
	return 0;
}
