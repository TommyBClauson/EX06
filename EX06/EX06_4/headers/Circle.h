#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
    private:
        double radius;
    

    public:
        Circle(); // no arg constuctor
        Circle(double); // constuctor with arguments
        double GetArea() const; // getting a area of circle
        double GetRadius() const;// return the radius of circle
        double Circle Subtract();
        int CompareTo();
        bool Circle operator < ();
        bool Circle operator <= ();
        bool Circle operator > ();
        bool Circle operator >= ();
        bool Circle operator == ();
        bool Circle operator != ();
};
#endif