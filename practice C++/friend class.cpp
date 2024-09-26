#include<iostream>
using namespace std;

class nepali;

class dollar
{
	private:
		int money=0;
		
	public:
		void set()
		{
			cout<<"Enter How Much Dollar:"<<endl;
			cin>>money;
		}
	friend class nepali;
};
class nepali
{
	private:
		int paisa=0;
	public:
	void change(dollar &obj)
		{
			paisa=obj.money*100;
			cout<<"Paisa="<<paisa<<endl;
		}
};
int main()
{
	dollar obj;
	obj.set();
	nepali obj1;
	obj1.change(obj);
	return 0;
}

