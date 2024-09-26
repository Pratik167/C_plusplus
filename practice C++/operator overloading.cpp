#include<iostream>
using namespace std;

class A
{
	private:
		int a=0;
	public:
		void p()
		{
			a=5;
		}
		A operator +(A &obj)
		{
			A s;
			s.a=a+obj.a;
			return s;
		}
		void display()
		{
			cout<<a;
		}
};
int main()
{
	A obj;
	A obj1;
	A c;
	obj.p();
	obj1.p();
	c=obj+obj1;
	c.display();
}
