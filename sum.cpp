#include<iostream>
using namespace std;
class B;// forward declaration
class A
{
	private:
	int x;
	friend void sum(A,B);
	public:
	void setvar()
	{
		cout<<"Enter a number:";
		cin>>x;
	}	
};
class B
{
	private:
	int y;
	friend void sum(A ,B );	
	public:
	void setvar()
	{
		cout<<"Enter a number:";
		cin>>y;
	}
};
void sum(A a,B b)//friend function        A= class , a= object ,same for b
{
	int c;
	c=a.x+b.y;
	cout<<"The sum of two number is:"<<c;
}
int main()
{
	A a;
	B b;
	a.setvar();
	b.setvar();
	sum(a,b);
	return 0;
	
}
