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
	void calculate(int a, float b)
	{
		float result;
		result=a-b;
		cout<<"Substraction:"<<result;
	}
};
int main()
{
	does obj;
	int m;
	
	cout<<"MENU"<<endl;
	cout<<"1.Add(int,int)"<<endl;
	cout<<"2.Multiply(float,float)"<<endl;
	cout<<"3.Substraction(int,float)"<<endl;
	here:
	cout<<"Choose:";
	cin>>m;
	
		try
		{
			if(m<1||m>3)
			{
				throw"Only 1-3";
			}
		}
		catch(const char *a)
		{
			cout<<"a";
		}
		goto here;
	switch(m)
	{
		case 1:
			int a,b;
			cout<<"Enter a and b:";
			cin>>a>>b;
			obj.calculate(a,b);
			break;
		case 2:
			float c,d;
			cout<<"Enter a and b:";
			cin>>a>>b;
			obj.calculate(c,d);
		case 3:
			int e;
			float f;
			cout<<"Enter a and b:";
			cin>>a>>b;
			obj.calculate(e,f);
	}
	return 0;
}
