#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() // no arg constuctor
{
    radius = 1;
}

Circle::Circle(double newRadius) // constuctor with arguments
{
    radius = newRadius;
}

double Circle::GetArea() const // getting a area of circle
{
    // calculation for area of a circle
    return radius * radius * 3.14159
}

double Circle::GetRadius() const // return the radius of circle
{
    return radius;
}

// calculating the differnce of the two circles radiuses
Circle double Circle::Subtract(Circle &circleTwo)
{
    double R = radius - circleTwo.GetRadius();
    return Circle(R);
}

// calcuates the twos cicles radiuses calues and returns as integers
int Circle::CompareTo(Circle &circleTwo)
{
    // findding the differece
    cTemp = Subtract(circleTwo);

    // Comparing the circles radiuses
    if (cTemp.GetRadius() < 0)
    {
        return -1;
    }
    else if (cTemp.GetRadius() == 0)
    {
        return 0;
    }
    else 
        return 1;
}

// operators comparing if cirlce 1 to circle 2 returning as bool
// < <= > >= == !=
Circle bool Circle::operator < (Circle c1, Circle c2)
{
    return (c1.CompareTo(c2) < 0);
}

Circle bool Circle::operator <= (Circle c1, Circle c2)
{
    return (c1.CompareTo(c2) <= 0);
}
Circle bool Circle::operator > (Circle c1, Circle c2)
{
    return (c1.CompareTo(c2) > 0);
}
Circle bool Circle::operator >= (Circle c1, Circle c2)
{
    return (c1.CompareTo(c2) >= 0);
}
Circle bool Circle::operator == (Circle c1, Circle c2)
{
    return (c1.CompareTo(c2) == 0);
}
Circle bool Circle::operator != (Circle c1, Circle c2)
{
    return (c1.CompareTo(c2) != 0);
}