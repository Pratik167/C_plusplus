#include <iostream>
using namespace std;

void money(float nepali=130, float dollar = 1) 
{
    float convert = nepali*dollar;
    cout << dollar <<"$ = " << convert <<"rupees"<< endl;
}
int main() 
{
    float dollar;
    cout << "Enter dollar: ";
    cin >> dollar;
    money(130, dollar);

    return 0;
}

