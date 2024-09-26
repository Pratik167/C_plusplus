#include<iostream>
using namespace std;

class A
{
	private:
		int a;
	
	public:
		A()
		{
			a=5;
		}
		operator int()
		{
			return a;
		}
};
int main()
{
	A obj;
	int ret;
	ret=obj;
	cout<<ret;
	return 0;
}
