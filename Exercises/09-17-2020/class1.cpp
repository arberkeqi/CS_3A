/**
 * 
 *
 * Copyright (c) 2020, Arber Keqi.
*/

#include <cstdio>
#include <string>
/**
 * The private attributes _r, _g, _b, along with the
 * public methods addRed() and red() implement 
 */

class Color {
    private:
    double _r;
    double _g;
    double _b;

    public:
    /** Do like this 
    Color(double r, double g, double b)
    {
        _r = r;
        _g = g;
        _b = b;
    }
    */

    // Delegation. Or like this. Better initialize like this 
    Color(double r, double g, double b) : _r(r), _b(b), _g(g){
    }

    /**
     * Single parameter constructor, for initialization
     * with a single double value (for monochromatic).
     * DON'T USE THIS!
     */
    Color(double rgb) : _r(rgb), _b(rgb), _g(rgb){
    }

    // Force initializing with constuctor
    explicit Color(std::string rgb) {
        _r = _g = _b = stod(rgb);
    }

    void dump() {
        printf("(%.1lf, %1lf, %1lf)\n", _r, _g, _b);
    }

    void addRed(double r)
    {
        _r += r;
    }

    double red()
    {
        return _r;
    }
};

int main()
{
    Color c1 = {0.2, 0.4, 0.3};
    Color c2 = {0.4, 0.2, 0.3};

    printf("c1.red() = %.1lf", c1.red());
    c1.addRed(0.3);
    printf("c1.red() = %.1lf", c1.red());

    // Possible because the single parameter constructor
    // is not explicit
    //Color c2 = 0.7;

    // Color c3 = std::string("o.3") DOES NOT WORK!
    Color c3(std::string("0.3"));
    c3.dump();
}