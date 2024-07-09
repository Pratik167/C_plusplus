#include<iostream>
using namespace std;

class Rupees; // Forward declaration

class Dollar
{
    private:
        float D;
    public:
        void setdata()
        {
            cout << "Enter Dollars:	";
            cin >> D;
        }
        void change(Rupees &r);
};
class Rupees
{
    private:
        float Rs;
    public:
        void display()
        {
            cout << "Equivalent Rupees: Rs_" << Rs << endl;
        }
        friend class Dollar;    
};
void Dollar::change(Rupees &r)//scope resolutions to define member function outside of the class
{
    r.Rs = D * 135.0;
}
int main()
{
    Rupees r;
    Dollar d;
    
    d.setdata();
    d.change(r);
    r.display();
    
    return 0;
}
