#include <iostream>
using namespace std;

class B;

class A
{
	private:
		int a;
	
	public:
		set()
		{
			cout<<"a:?";
			cin>>a;
		}
	friend class B;
};

class B
{
	private:
		int b;
	
	public:
		give(A &obj)
		{
			b=obj.a;
			cout<<b;
		}
};
int main()
{
	A obj;
	obj.set();
	B obj1;
	obj1.give(obj);
	return 0;
}
