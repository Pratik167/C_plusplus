#include <iostream>
using namespace std;

void PE(float mass, float gravity = 9.8, float height = 1) 
{
    float potentialEnergy = mass * gravity * height;
    cout << "PE = " << potentialEnergy << endl;
}

int main() {
    float mass, height;
    cout << "Enter Mass and height: ";
    cin >> mass >> height;
    PE(mass, 9.8, height);

    return 0;
}

