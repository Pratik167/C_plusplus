#include<iostream>
using namespace std;

class A
{
	private:
		int a;
	
	public:
		A(int b)
		{
			a=b;
			cout<<a;
		};
};
int main()
{
	int m;
	cout<<"Enter m:";
	cin>>m;
	A obj(m);
	return 0;
}
