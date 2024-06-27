#include<iostream>
using namespace std;
int main()
{
	int n=0,d=0,r=0,temp=0;
	
	cout<<"Enter Number:";
	cin>>n;
	temp=n;
	
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	cout<<"reverse is:"<<r<<endl;
	if(temp==r)
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not Palindrome";
	}
	return 0;
}
