/**
 * @mhw1.cpp
 * Calculator for volume
 *
 * @author Micki Ross (micki22)
 * @date   September 1st, 2022
 *
 * Virginia Tech Honor Code Pledge
 * On my honor:
 *
 * - I have not discussed the C++ language code in my program with
 * anyone other than my instructor or the teaching assistants
 * assigned to this course.
 * - I have not used C++ language code obtained from another student,
 * or any other unauthorized source, either modified or unmodified.
 * - If any C++ language code or documentation used in my program
 * was obtained from another source, such as a text book of coarse
 * notes, that has been clearly noted with a proper citation in
 * the comments of my program.
 * - I have not designed this program in such a way as to defeat or
 * interfere with the normal operation of the Web-Cat Server.
 *
 * Micki Ross
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
