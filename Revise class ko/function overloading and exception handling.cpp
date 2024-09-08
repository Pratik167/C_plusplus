#include<iostream>
using namespace std;

class calculator
{

	
	public:
		void garr(int a, int b)
		{
			int result=a+b;
			cout<<result;
		}
		void garr(float a, float b)
		{
			float result=a-b;
			cout<<result;
		}
		void garr(int a, float b)
		{
			float result=a*b;
			cout<<result;
		}
};


int main()
{
	calculator P;
	int choice;
	
	cout<<"\t\tMENU\t\t\n";
	cout<<"\t\t1.Add(int,int)\t\t\n";
	cout<<"\t\t2.Sub(float,float)\t\t\n";
	cout<<"\t\t3.Multiply(int,float)\t\t\n";
	cout<<"\t\t4.Exit\t\t\n";
	cout<<"\t\tEnter Choice:\t";
	cin>>choice;
	
	try
	{
		if(choice<=0||choice>4)
		{
			throw"\t\t1-4 matra chalxa";
		}
	}
	catch(const char *a)
	{
		cout<<a;
	}
	
	switch(choice)
	{
		case 1:
			int a,b;
			cout<<"Enter 2 Numbers";
			cin>>a>>b;
			P.garr(a,b);
			break;
		
		case 2:
			float c,d;
			cout<<"Enter 2 Numbers";
			cin>>c>>d;
			P.garr(c,d);
			break;
			
		case 3:
			int e;
			float f;
			cout<<"Enter 2 Numbers";
			cin>>e>>f;
			P.garr(e,f);
			break;
			
		case 4:
			cout<<"Bye";
			exit(0);
	}
	
	

	return 0;
}
