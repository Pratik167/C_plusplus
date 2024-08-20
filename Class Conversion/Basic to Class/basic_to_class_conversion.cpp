//basic to class data conversion using constructor
#include<iostream>
using namespace std;

class Money
{
	private:
		int dollars;
		int cents;
	public:
		Money(float m)
		{
			float value = m/130;
			int ref = m/130;
			dollars = ref;
			cents = (value - ref)*100;
		}
		void display()
		{
			cout << endl << "In dollars: ";
			cout << endl << "Dollars: " << dollars;
			cout << endl << "Cents: " << cents;
		}
};

int main()
{
	float value;
	cout << "Enter money in Rupees: ";
	cin >> value;
	Money m = value;
	m.display();
	return 0;
}
