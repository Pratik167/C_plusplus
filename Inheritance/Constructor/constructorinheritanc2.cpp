#include <iostream>
using namespace std;

class parent
{

    int x;
    public:

    // parameterized constructor
    parent(int i)
    {
        x = i;
        cout << "Parent class Parameterized Constructor\n";
    }
};

class child: public parent
{

    int y;
    public:

    // parameterized constructor
    child(int j) : parent(j)  //Explicitly calling
    {
        y = j;
        cout << "Child class Parameterized Constructor\n";
    }
};

int main()
{
   child c(10);

    return 0;
}