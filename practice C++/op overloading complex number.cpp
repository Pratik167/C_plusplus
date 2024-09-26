#include<iostream>
using namespace std;

class A
{
	private:
		int real,img;
	
	public:
		void value()
		{
			cout<<"Enter Real:";
			cin>>real;
			cout<<"Enter Imaginary:";
			cin>>img;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i";
		}
		A operator +(A &obj)
		{
			A c;
			c.real=real+obj.real;
			c.img=img+obj.img;
			return c;
		}
};
int main()
{
	A obj;
	A obj1;
	A c;
	obj.value();
	obj1.value();
	c=obj+obj1;
	c.display();
	return 0;
}
