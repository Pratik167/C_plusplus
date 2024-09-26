#include<iostream>
using namespace std;

class A
{
	private:
		int a,b;
	
	public:
		A()
		{
			a=5;
			b=6;
			cout<<a<<endl<<b;
			cout<<"Default"<<endl;
		}
		A(int x, int y)
		{
			a=x;
			b=y;
			cout<<a<<endl<<b;
			cout<<"Parameterized";
		}
		A(A &obj)
		{
			a=obj.a;
			b=obj.b;
			cout<<a<<endl<<b;
			cout<<"Copy";
		}
};
int main()
{
	A obj;
	A obj1(1,2);
	A obj2(obj1);
	return 0;
}
