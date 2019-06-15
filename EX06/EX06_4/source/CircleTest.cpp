#include "Circle.h"
#include <iostream>
using namespace std;

int main()
{
    // creating object
    Circle c1(9.0);
    Circle c2(11.0);

    // Calcuating the area of cicle given the radius of circle 1 and circle 2
    cout << "The area of circle 1 radius " << c1.GetRadius() << " is " << c1.GetArea() << endl;
    cout << "The area of circle 2 radius " << c2.GetRadius() << " is " << c2.GetArea() << endl;

    // Comparing the values using the < <= > >= == != operators
    cout << "Circle 1" << " > " << "Circle 2: " << ((c1 > c2) ? "True" : "False") << endl;
    cout << "Circle 1" << " >= " << "Circle 2: " << ((c1 >= c2) ? "True" : "False") << endl; 
    cout << "Circle 1" << " < " << "Circle 2: " << ((c1 < c2) ? "True" : "False") << endl; 
    cout << "Circle 1" << " <= " << "Circle 2: " << ((c1 <= c2) ? "True" : "False") << endl; 
    cout << "Circle 1" << " == " << "Circle 2: " << ((c1 == c2) ? "True" : "False") << endl; 
    cout << "Circle 1" << " != " << "Circle 2: " << ((c1 != c2) ? "True" : "False") << endl; 

        return 0;
}