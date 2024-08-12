#include<iostream>
using namespace std;

class X{
	private:
		int a;
		int b;
	public:
		X()
		{
			a=100;
			b=900;	
		}
	void display(){
		cout<<"Sum= "<<a+b;
	}
};

int main()
{
	X obj1;
	X obj2;
	
	cout<<"Total Sum of both objects= "<<5+6;
	return 0;
}