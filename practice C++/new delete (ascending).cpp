#include<iostream>
using namespace std;

int main()
{
	int i,j,a;
	int *p;
	int *temp;
	
	cout<<"Enter a:";
	cin>>a;
	p=new int [a];
	temp=new int;
	
	for(i=0;i<a;i++)
	{
		cout<<"Enter Number "<<i+1<<":	";
		cin>>*(p+i);
	}
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if(*(p+i)>*(p+j))
			{
				*temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=*temp;
			}
		}
	}
	cout<<"Ascending Order:"<<endl;
	for(i=0;i<a;i++)
	{
		cout<<*(p+i)<<endl;
	}
	delete temp;
	delete []p;
	return 0;
}
