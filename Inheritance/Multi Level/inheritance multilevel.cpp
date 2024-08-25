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
        void test()
        {
        	cout<<"This is just a test to see whether child can access grandparent class or not";
		}

};

// class_B inheriting class_A

class Computer: protected electronicDevice

{

    public:

        // constructor of the base class 2

        Computer()

        {

            cout << "I am a computer.\n\n";

        }

};

// class_C inheriting class_B

class Linux_based : public Computer

{

    public:

        // constructor of the derived class

        Linux_based()

        {

            cout << "I run on Linux.\n\n";;
            test();

        }

};

int main()

{

    // create object of the derived class 

    Linux_based obj; // constructor of base class 1, 

                    // base class 2, derived class will be called
                    //obj.test();

    return 0;

}