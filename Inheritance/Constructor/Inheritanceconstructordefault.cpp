
#include<iostream>
using namespace std;

class Kist{

	public:
		Kist()
		{
			
			cout<<" Parent Constructor"<<endl;
		}
		
		~Kist()
		{
			cout<<"Parent Destructor"<<endl;
		}
};

class BIT:public Kist
{
	public:
	
		BIT()
		{
		
			cout<<" Child Constructor"<<endl;
		}
		~BIT()
		{
			cout<<"Child Destructor"<<endl;
		}
};

int main()
{
	BIT obj;
	return 0;
}
