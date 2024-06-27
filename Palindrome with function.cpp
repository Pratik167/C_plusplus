#include<iostream>
using namespace std;
int palindrome(int);
int main()
{
	int n=0,result=0;
	cout<<"Enter Number:";
	cin>>n;
	result=palindrome(n);
	if(result==1)
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not Palindrome";
	}
	return 0;
}
int palindrome(int a)
{
	int r=0,d=0,temp=0;
	temp=a;
	while(a>0)
	{
	d=a%10;
	r=r*10+d;
	a=a/10;
    }
	if(temp==r)
	{
		return 1;
	}
	else
		return 0;
}
