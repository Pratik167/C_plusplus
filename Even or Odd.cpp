#include<iostream>
using namespace std;

int main()
{
	int num=0,result=0;
	cout<<"Enter Number:";
	cin>>num;
	result=num%2;
	
	if(result==0)
	{
		cout<<"Even";
	}
	else
	{
		cout<<"Odd";
	}
	return 0;
}
