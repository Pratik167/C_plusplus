#include<iostream>
using namespace std;

class does
{
	public:
	void calculate(int a, int b)
	{
		int result;
		result=a+b;
		cout<<"Add:"<<result;
	}
	void calculate(float a, float b)
	{
		float result;
		result=a*b;
		cout<<"Multiply:"<<result;
	}
	void calculate(int a, double b)
	{
		float result;
		result=a-b;
		cout<<"Substraction:"<<result;
	}
};
int main()
{
	does obj;
	
	obj.calculate(5,5);
	return 0;
}
