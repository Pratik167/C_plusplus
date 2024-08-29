#include <iostream>
using namespace std;

// Defining the parent class
class Parent 
{
	protected:
		
			int a;
			int b;
		
    public: 
 	Parent() 
    { 
        a=5;
		b=6; 
    } 
};


class Child : public Parent 
{
    public:
    // print redeclared in child class
   void add()
    {  
        cout << a+b << endl; 
} 
}; 
int main() 
{ 
	Child obj;//constructor triggered so value of a and b got set
	Child *parent = new Child();

 parent->add(); //-> used instead of . while using pointer
 return 0; 
}



