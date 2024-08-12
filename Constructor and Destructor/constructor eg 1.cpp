#include<iostream>
using namespace std;

class KIST{
	
	public:
		KIST()
		{
			cout<<"This is test of constructor"<<endl;
		}
	public:
	void test()
	{
		cout<<"This is test of normal member function"<<endl;
	}
};
int main()
{
	//KIST obj;
	obj.test();
	return 0;
}