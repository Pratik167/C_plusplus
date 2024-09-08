#include<iostream>
using namespace std;

int main()
{
	int *temp;
	int a=0;
	
	temp=new int;
	cout<<"Enter how many numbers:";
	cin>>a;
	int *n=new int[a];
	for(int i=0;i<a;i++)
	{
		cout<<"Enter Number"<<i+1<<":";
		cin>>*(n+i);
	}
	for(int i=0;i<a;i++)
	{
		for(int j=i+1;j<a;j++)
		{
		if(*(n+i)>*(n+j))
		{
			*temp=*(n+i);
			*(n+i)=*(n+j);
			*(n+j)=*temp;
		}
		}
	}
	for(int i=0;i<a;i++)
	{
		cout<<*(n+i)<<endl;
	}
	delete temp;
	delete[] n;
	return 0;
}
