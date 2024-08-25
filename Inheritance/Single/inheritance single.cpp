#include <iostream>

using namespace std;

// base class 

class electronicDevice

{

public:

    // constructor of the base class 

    electronicDevice()

    {

        cout << "I am an electronic device.\n\n";

    }

};

 // derived class

class Computer: public electronicDevice

{

public:

    // constructor of the derived class

    Computer()

    {

        cout << "I am a computer.\n\n";

    }

};

int main()

{

    // create object of the derived class
	Computer obj; // constructor of base class and

                  // derived class will be called

    return 0;

}