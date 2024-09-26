#include<iostream>
using namespace std;

class A
{
	private:
		int length=0, breadth=0;
	public:
		A()
		{
			length=5;
			breadth=5;
		} 
		friend void area(A obj);
};

void area(A obj)
{
	int a=0;
	a=obj.length*obj.breadth;
	cout<<a;
};
int main()
{
	A obj;
	area(obj);
	return 0;
}
