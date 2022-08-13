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

    // Force initializing with constructor
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

// Inheritance from Monochrome to Color
// Monochrome is "derived class"
// Color is "base class"
class Monochrome : public Color {
    public:
    // Delegation with initialization of base class
    explicit Monochrome(double v) : Color(v ,v, v) {
    }
};


int main()
{
    Monochrome m1(0.6);
    // Can call dump() because it is inherited
    m1.dump();
}