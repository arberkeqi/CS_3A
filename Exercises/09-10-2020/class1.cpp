#include <cstdio>
#include <cmath>

class Point 
{
    //Only visible to class (encapsulation)
    private:
    //Attributes; you're free to change private variables at will
    double _x;
    double _y;

    double _trunc(double v)
    {
        char buf[0x10];
        sprintf(buf, "%.1lf", v);
        sscanf(buf, "%lf", &v);
        return v;
    }
    //Methods
    public:

    //Constructor: notice no return type and name 
    Point(double a, double b) //point is a constractor
    {
        printf("Constructor called!\n");
        _x = a;
        _y = b;
    }

    //Default constructor, "overloaded" with the other one
    Point()
    {
        printf("Constructor 2 called!\n");
    }
    
    double magnitude()
    {
        return sqrt(_x*_x +_y*_y); // _x*_x - _x^2
    }

    //Mutators AKA "setters"
    // Use only if insterting additional logic
    void setX(double x)
    {
        //Only handle quadrant 1
        if (x>= 0)
        {
            _x = x;
        }
    }

    void setY(double y)
    {
        if (y >= 0)
        {
        _y = y;
        }
    }

    //"Accessors" AKA "getters"
    // use only if modifing the data in some way
    double getX()
    {
        return _trunc(_x);
    }
    double getY()
    {
        return _trunc(_y);
    }
};

int main()
{
    Point p1(3.0, 4.0);
    printf ("Magnituded of p1 = %.1lf\n", p1.magnitude());
    
    Point p2 = {1.2, 2.4};
    printf ("Magnituded of p2 = %.1lf\n", p2.magnitude());

    Point p3 = Point(0.3, 0.4);
    printf ("Magnituded of p3 = %.1lf\n", p3.magnitude());

    //Instanting default constructor
    Point p4; //Actually invoking Point(), the default constructor
    p4.setX(1.0);
    p4.setY(2.0);
    printf ("Magnituded of p4 = %.1lf\n", p4.magnitude());
}