//basic to class conversion using operator overloading
#include<iostream>
using namespace std;

class Money
{
	private:
		int dollars;
		int cents;
	public:
		void operator =(float value)
		{
			value = value/130;
			int ref = value;
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
	cout << "Enter money in rs: ";
	cin >> value;
	Money m;
	m = value;
	m.display();
	return 0;
}
