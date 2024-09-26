#include<iostream>
using namespace std;

class shape
{
	public:
		virtual float shape::area()=0;
};
class circle: public shape
{
	private:
		int radius;
	public:
		float area()
		{
			cout<<"Enter Radius:";
			cin>>radius;
			cout<<"Area="<<radius*radius;
		}
};
int main()
{
	shape sh;
	circle obj1;
	obj1.area();
	return 0;
}
