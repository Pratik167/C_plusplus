#include <iostream>
using namespace std;

// Defining the parent class
class Parent 
{
    public: 
 	void print() 
    { 
        cout << "Parent Class" << endl; 
    } 
};

// Defining the child classs 
class Child : public Parent 
{
    public:
    // print redeclared in child class
   virtual void print()
    {  
        cout << "Child Class" << endl; 
} 
}; 
int main() 
{ 
	Child *parent = new Child();

 // catch of the program is here 
// also as we are dealing with pointers instead of . we need to use -> 
 parent->print(); 
 return 0; 
}



