#include <iostream>
using namespace std;

class Menu 
{
private:
    int a;
    int b;

public:
    void setvar(int n1, int n2) 
	{
        a = n1;
        b = n2;
    }

    int add() 
	{
        return a + b;
    }

    int sub() 
	{
        return a - b;
    }

    int product() 
	{
        return a * b;
    }
};

int main() {
    Menu does;
    int n1, n2;
    int m;
    cout << "***MENU***" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Product" << endl;
    cout << "4. Exit" << endl;

    while (1) 
	{
        cout << "Choice: ";
        cin >> m;

        switch (m) 
		{
            case 1: 
			{
                cout << "Enter two numbers: ";
                cin >> n1 >> n2;
                does.setvar(n1, n2);
                cout << "SUM: " << does.add() << endl;
                break;
            }
            case 2: 
			{
                cout << "Enter two numbers: ";
                cin >> n1 >> n2;
                does.setvar(n1, n2);
                cout << "DIFF: " << does.sub() << endl;
                break;
            }
            case 3: 
			{
                cout << "Enter two numbers: ";
                cin >> n1 >> n2;
                does.setvar(n1, n2);
                cout << "PRO: " << does.product() << endl;
                break;
            }
            case 4: 
			{
                cout << "Thanks???" << endl;
                exit(0);
            }
            default: 
			{
                cout << "Wrong Input" << endl;
                break;
            }
        }
    }
    return 0;
}
