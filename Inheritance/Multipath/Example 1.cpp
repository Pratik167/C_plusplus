#include <iostream>
using namespace std;

class Battery
{
	public:
	void charge()
	{
		cout<<"Charge Hudaixa";
	}
};
class Phone : virtual public Battery
{
	// just made for example
};
class Tablet : virtual public Battery
{
	//same here;
};
// now here these two classes inherit the properties of Batter (Base) class
// and since they are using virtual keyword only one instance of base class is made
// instead of two copies
class Phablet : public Phone , public Tablet
{
	//this class inherits both phone and tablet class,(which are base class of Phablet in this case)
};
int main()
{
	Phablet obj;
	obj.charge();
	return 0;
}
