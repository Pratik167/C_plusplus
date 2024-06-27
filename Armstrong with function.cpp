#include<iostream>
#include<math.h>
int armstrong(int);
using namespace std;
int main()
{
	int n=0,result=0;
	 cout<<"Enter Number:";
	 cin>>n;
	  result=armstrong(n);
	  if(result==1)
	  {
	  	cout<<"Armstrong";
	  }
	  else
	  {
	  	cout<<"Not Armstrong";
	  }
	  return 0;
}
int armstrong(int n)
{
	int d=0,r=0,temp1=0,temp2=0,count=0;
	  temp1=n;
	  temp2=n;
	  
	  while(n!=0)
	  {
	  	n=n/10;
	  	count++;
	  }
	  while(temp1>0)
	  {
	  	d=temp1%10;
	  	r=pow(d,count)+r;
	  	temp1=temp1/10;
	  }
	  if(temp2==r)
	  {
	  	return 1;
	  }
	  else
	  return 0;
}
