// Overload ++ when used as a prefix operator

#include <iostream>
using namespace std;

class Count {
    private:
        int value;

   public:

    // constructor to initialize count to 5
    //Count() : value(5) {} //This is also a way to write constructor
    Count()
    {
    	value=5;
	}

    // overload ++ when used as prefix
    void operator ++ () {
        value=value+100;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;

    // call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}