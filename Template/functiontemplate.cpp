#include<iostream>
using namespace std;

template<typename T>
T kist(T a, T b, T c)
{
	T x;
	x=a+b+c;
	return x;
}

template<typename L>
L kist(L a, L b)
{
	L x;
	x=a*b;
	return x;
}

int main()
{
	int return1;
	float return2;

	
	return1=kist<int>(2,3,5);
	return2=kist<float>(2.2,3.2);

	cout<<"TEmplate as integer"<<return1<<endl;
	cout<<"Template as float" <<return2<<endl;
//	cout<<"Template as float for L"<<return3;
	return 0;
}






