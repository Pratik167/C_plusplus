#include<iostream>
using namespace std;

template<class L>
class Test{
	private:
		L a;
		L b;
		
	public:
		L sum;
		
		Test(L x, L y)
		{
			a=x;
			b=y;
		}
		void addition()
		{
			sum=a+b;
			cout<<"Total sum= "<<sum<<endl;
		}
	
};

int main()
{
	
	Test<int> obj(10,15);
	Test<float> obj1(5.5,6.4);
	obj.addition();
	obj1.addition();
	return 0;
}






