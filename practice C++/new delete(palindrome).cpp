#include<iostream>
using namespace std;

int main()
{
	int d=0,r=0;
	
	int *n,*temp;
	n=new int;
	temp=new int;
	cout<<"Enter how many number:";
	cin>>*n;
	*temp=*n;
	
	while(*n>0)
	{
		d=*n%10;
		r=r*10+d;
		*n=*n/10;
	}
	if(*temp==r)
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not Palindrome";
	}
	delete n;
	delete temp;
	return 0;
}
