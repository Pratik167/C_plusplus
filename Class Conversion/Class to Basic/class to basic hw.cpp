#include<iostream>
using namespace std;

class DIST{
	private:
		int km;
		int m;
		
	public:
		DIST(int x,int y)
		{
			km=x;
			m=y;
		}
		operator int() //gets called when class to basic conversion is needed.
		{
			return (km*1000+m);
		}
};

int main()
{
	int totaldist;
	int x,y;
	cout<<"Enter km and m: "<<endl;
	cin>>x>>y;
	DIST obj(x,y); //Basic to Class using constructor
	totaldist=obj; //Class to Basic
	cout<<"Total distance in meter: "<<totaldist;
	return 0;
}