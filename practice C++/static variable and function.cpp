#include<iostream>
using namespace std;

class A
{
	private:
		int pe=0;
		int mass=0;
		int height=0;
		static float gravity;
	
	public:
		static grav()
		{
			cout<<"Gravity="<<gravity<<endl;
		}
		void doe(int a, int b)
		{
			mass=a;
			height=b;
			pe=mass*height*gravity;
			cout<<"PE:"<<pe<<endl;
		}
};
	float A::gravity=9.8;
int main()
{
	A obj;
	obj.grav();
	obj.doe(50,100);
	obj.doe(5,10);
	return 0;
}
