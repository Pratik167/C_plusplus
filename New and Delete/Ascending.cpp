#include <iostream>
using namespace std;

int main() 
{
    int num=0,i=0,j=0;
    cout << "How many numbers do you want: ";
    cin >> num;
	float temp;
    float* p;
    p= new float[num];

    cout << "Enter the numbers:" << endl;
    for (i = 0; i<num;i++) 
	{
        cout << "Number " << i + 1 << ": ";
        cin >> *(p + i);
    }
    for (i=0;i<num-1;i++) 
	{
        for (j=0;j<num-i-1;j++) 
		{
            if (*(p + j) > *(p + j + 1)) 
			{
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
    cout <<endl<< "Numbers in ascending order:" << endl;
    for (i=0;i<num;i++)
	{
        cout << *(p + i) << endl;
    }
    cout<<"Highest Number is:\t"<<*(p+num-1);
    cout<<endl<<"Lowest Number is:\t"<<*(p);//p base address soo first index ma lowest

    delete[] p;
    return 0;
}

