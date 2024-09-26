#include<iostream>
using namespace std;

class A
{
	private:
		int length,breadth,height;
	public:
	A(int length, int breadth=5, int height=0)
{
	int volume;
	volume= length*breadth*height;
	cout<<"Volume="<<volume;
}
};
int main()
{
	A obj(5,8,10);
	return 0;
}

