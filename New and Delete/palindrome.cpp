#include <iostream>
using namespace std;

int main() 
{
    int* number=new int;

    cout << "Enter a number: ";
    cin >> *number;

    int ogNum = *number;
    int rev = 0;
    int remainder;

    while (*number != 0) 
	{
        remainder =*number%10;
        rev = rev*10+remainder;
        *number =*number/10;
    }
    if (ogNum == rev) 
	{
        cout << ogNum << " is a palindrome." << endl;
    } 
	else 
	{
        cout << ogNum << " is not a palindrome." << endl;
    }

    delete number;
    return 0;
}

