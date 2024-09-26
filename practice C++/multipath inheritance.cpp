#include<iostream>
using namespace std;

class electronic
{
	public:
		charge()
		{
			cout<<"Charging";
		}
};
class computer: virtual public electronic
{
};
class laptop: virtual public electronic
{
};
class mobile: public computer, public laptop
{
};
int main()
{
	mobile obj;
	obj.charge();
	return 0;
}
