#include<iostream>
using namespace std;

class KIST{
	private:
		int num;
		int q;
		int r;
	public:
		KIST(int x)
		{
			num=x;
		//	cout<<"This is done by parameterized constructor"<<endl;
		}
		KIST(KIST &t)
		{
			num=t.num;
			//cout<<"This is done by copy constructor"<<endl;
		}
		void operator ++ ()
		{
			q=num/3;
			//cout<<"Now we used pre mode overloading to find quotient"<<endl;
		}
		void operator ++(int)
		{
			r=q%2;
			if(r==0)
			{
				cout<<"It is even"<<endl;
			}
			else
			{
				cout<<"It is odd"<<endl;
			}
			//cout<<"Even and odd is found using post mode overloading"<<endl;
		}
		void display()
		{
			cout<<"Value of num= "<<num<<endl;
		}
};

int main()
{
	int unum;
	cout<<"Enter number: ";
	cin>>unum;
	KIST obj1(unum);//parameterized constructor
	KIST obj2(obj1);//copy constructor
	
	obj1.display();
	obj2.display();
	++obj2; //overloading code in premode
	obj2++;//overloading code in postmode
	return 0;
}