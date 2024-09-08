#include<iostream>
using namespace std;

class PE
{
	private:
		int mass,height;
		float energy;
		static float gravity;
	public:
		static give()
		{
			cout<<"Value of Gravity is:"<<gravity<<endl;
		}
		void gar(int a, float b)
		{
			mass=a;
			height=b;
			energy=mass*height*gravity;
			cout<<"PE="<<energy<<endl;
		}
};
float PE::gravity=9.8;
int main()
{
	PE A;
	A.give();
	A.gar(100,5);
	A.gar(50,10); 
	return 0;
}
