#include <iostream>
using namespace std;

void area(float pi=3.1415, float radius = 1) 
{
    float area = pi * radius*radius;
    cout << "Area = " << area <<"cm^2"<< endl;
}
int main() 
{
    float radius;
    cout << "Enter Radius: ";
    cin >> radius;
    area(3.1415, radius);

    return 0;
}

