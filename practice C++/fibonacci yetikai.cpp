#include <iostream>
using namespace std;

int main()
{
    int i = 0, n = 0;
    int t1 = 0, t2 = 1, nextTerm = 0; // t1 and t2 are the first two terms of Fibonacci

    cout << "Enter how many terms: ";
    cin >> n;

    cout << t1 << " " << t2 << " "; // Print the first two terms

    for(i = 2; i < n; ++i)
    {
        nextTerm = t1 + t2;  // The next term is the sum of the previous two
        cout << nextTerm << " ";
        t1 = t2;  // Update t1 and t2 for the next iteration
        t2 = nextTerm;
    }

    return 0;
}

