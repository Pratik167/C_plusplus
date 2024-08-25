#include <iostream>

using namespace std;

// class_A

class electronicDevice

{

    public:

        // constructor of the base class 1

        electronicDevice()

        {

            cout << "I am an electronic device.\n\n";

        }

}; 

// class_B 

class Computer

{

    public:

        // constructor of the base class 2

        Computer()

        {

            cout << "I am a computer.\n\n";

        }

}; 

// class_C inheriting class_A and class_B

class Linux_based :public Computer,  public electronicDevice

{}; 

int main()

{

    // create object of the derived class

       Linux_based obj; // constructor of base class A, 

                        // base class B and derived class 

                        // will be called

    return 0;

}

