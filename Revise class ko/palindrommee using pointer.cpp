#include<iostream>
using namespace std;

int main()
{
	int *p,*rev,*temp,*rem;
	p=new int;
	temp= new int;
	rev= new int;
	rem=new int;
	*rev=0;
	cout<<"Enter a Number:";
	cin>>*p;
	*temp=*p;
	while(*p>0)
	{
		*rem=*p%10;
		*rev=*rev*10+*rem;
		*p=*p/10;
	}
	if(*rev==*temp)
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"not";
	}
	delete p;
	delete rev;
	delete temp;
	delete rem;
	return 0;
}
