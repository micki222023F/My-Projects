/**
 * 
 * Calculator for volume
 *
 * @author Micki Ross (micki22)
 * @date   September 1st, 2022
 *
 * Virginia Tech Honor Code Pledge
 */

#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES //for C++
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(4);
    // defined variables
    double radius, heightcone, Heightcylinder, cone, cylinder, sphere;
        cout << "Please enter the radius of the tank: ";
        cin >> radius;
        cout << "Please enter the height of the cone portion: ";
        cin >> heightcone;
        cout << "Please enter the Height of the cylinder portion: ";
        cin >> Heightcylinder;
        cone = radius * radius * heightcone * M_PI * 1/3;
        cylinder = radius * radius * M_PI * Heightcylinder;
        sphere = radius * radius * 4/3 * radius * M_PI * 1/2;
    //calculations
        cout << "\nVolume of the cone portion is " << cone << ".\n";
        cout << "Volume of the cylinder portion is " << cylinder << ".\n";
        cout << "Volume of the sphere portion is " << sphere << ".\n";
        cout << "Total volume is " << cone + cylinder + sphere << "." << endl;
        cout << fixed << setprecision(1);
        cout << "Total liters is " << (cone + cylinder + sphere) * 1000 << ".\n" << endl;

    return 0;
}
