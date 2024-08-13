#include <iostream>
using namespace std;
class Distance 
{
private:
    int km;
    int m;

public:

    Distance() : km(0), m(0) {}//using default constructor to initialize the distances into 0
    Distance(int km, int m) : km(km), m(m) //using parameterized construcotr to set the data members with given inputs
	{
        if (m >= 1000) 
		{
            km += m / 1000;
            m = m % 1000;
        }
    }
    Distance operator+(Distance &d) // overloading the operator section
	{
        Distance temp;
        temp.m = m + d.m;//m and km are the values from d1 and d.m and d.km are from d2
        temp.km = km + d.km;

        if (temp.m >= 1000) 
		{
            temp.km += temp.m / 1000;
            temp.m = temp.m % 1000;
        }
        return temp;
    }
    void input() 
	{
        cout << "Enter kilometers: ";
        cin >> km;
        cout << "Enter meters: ";
        cin >> m;
        
        if (m >= 1000) 
		{
            km += m / 1000;
            m = m % 1000;
        }
    }
    void display()
	{
        cout << km << " kilometers and " << m << " meters" << endl;
    }
};

int main() 
{
    Distance d1, d2, d3;

    cout << "Enter first distance:\n";
    d1.input();

    cout << "Enter second distance:\n";
    d2.input();

    d3 = d1 + d2;

    cout << "\nSum of distances: ";
    d3.display();

    return 0;
}

