#include<iostream>
using namespace std;

template<typename T>
void asc(T arr[],int n)
{
	int i=0,j=0;
	T temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}	
		}
		
	}
	
	cout<<"The arranged array is";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}

int main()
{
	int x[10]={23,6,12,68,34,77,23,90,78,34};
	float y[10]={2.4,5.6,1.2,7.6,3.4,99.8,56.7,23.4,67.8,99.99};
	asc<int>(x,10);
	asc<float>(y,10);
	
	return 0;
	
	
	
	
}