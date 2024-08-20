#include <iostream>
using namespace std;

class DistanceKM //first class to take the input
{
    int kilometers;
    int meters;

public:
    // Constructor to initialize kilometers and meters
    DistanceKM(int km, int m) : kilometers(km), meters(m) {}

    // Function to get the total distance in meters
    int getTotalMeters()
	{
        return (kilometers * 1000) + meters;
    }

    // Friend class declaration to allow DistanceM access to DistanceKM's private members
    friend class DistanceM;
};

class DistanceM // second class destination to convert and display
{
    int meters;

public:
    // Default constructor
    DistanceM() : meters(0) {}

    // Constructor to initialize meters directly
    DistanceM(int m) : meters(m) {}

    // Conversion constructor to convert DistanceKM to DistanceM
    DistanceM(DistanceKM &d) 
	{
        meters = d.getTotalMeters();
    }

    // Function to display the distance in meters
    void display() 
	{
        cout << "Distance in meters: " << meters << " m" << endl;
    }
};

int main() 
{
    int km, m;

    cout << "Enter distance in kilometers: ";
    cin >> km;

    cout << "Enter distance in meters: ";
    cin >> m;

    // Create an object of DistanceKM with the given kilometers and meters
    DistanceKM distanceInKM(km, m);

    // Convert DistanceKM to DistanceM
    DistanceM distanceInM = distanceInKM;

    // Display the distance in meters
    distanceInM.display();

    return 0;
}

