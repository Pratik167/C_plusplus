// C++ program to show how to call parameterized Constructor 
// of base class when derived class's Constructor is called 

#include <iostream> 
using namespace std; 

// base class 
class Parent { 
	int x; 
	int y;

public: 
	// base class's parameterized constructor 
	Parent(int i) 
	{ 
		x = i; 
		cout << "Inside base class's parameterized "
				"constructor"
			<< endl; 
	} 
}; 

// sub class 
class Child : public Parent { 
public: 
int b;
	// sub class's parameterized constructor 
	Child( Parent(x,y) 
	{ 
			b=x;		
			cout << b<< " Inside sub class's parameterized "
				"constructor"
			<< endl; 
	} 
}; 

// main function 
int main() 
{ 

	// creating object of class Child 
	Child obj1(10); 
	return 0; 
}
