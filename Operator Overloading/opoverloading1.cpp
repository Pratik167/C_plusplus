//prefix operator, postfix operator loading
//Operator Overloading= Overloading the existing definition of
//operator with new defintion.

//eg of preincrement or predecrement operator
#include<iostream>
using namespace std;

class KIST{
			private:
				float a;
			public:
				KIST()
				{
					a=100.6;
				}
			void operator ++() //for premode
			{
				a=a+400;	
			}				
			void operator ++(int)//for postmode
			{
				a=a-375;
			}
			void display()
				{
					cout<<"Value of a= "<<a;
				}
			};
int main()
{
	
	KIST obj; //triggers constuctor setting value of a as 100 which belongs to obj object

	++obj; //triggers operator overloading code of pre mode
	obj++; //triggers operator overloading code of post mode
	obj.display();
	return 0;
}






