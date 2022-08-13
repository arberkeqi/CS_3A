#include <cstdio>

// Must have () to enclose the expression! 
#define SIZE(a) (sizeof(a) / sizeof(a[0])

class Point {
 private:
  double _x, _y;

 // If you define any constructor, the system default constructor goes away
 public:
  // We need the "default" constructor to accomodate the new Space
  Point() {
  }
  Point(double x, double y) : _x(x), _y(y) {
  }
  ~Point() {
  }
};

class Space {
 private:
  Point *_points;

 public:
 // Point points[] is equivalent to "Point *points"
  Space(Point points[], int n) { // Pass an array of points
    _points = new Point[n]; // Creating n empty instances of Point
    for (int i = 0; i < n; i++) {
      _points[i] = points[i]; // Copy happens through "copy constructor"
    }
  }
  ~Space() {
    printf("~Space()\n");
    delete [] _points; // if we dont put [] we delete only the first one, if we put [] we delete all array
  }
};

int main()
{
  // Notice that we dont specify the size of the array
  Point points[] = {
    Point(-1.0, 2.2),
    Point(0, 0),
    Point(2.3, 8.1), // Note the extra "," at the end - this is optional
  };

  /**
   * "Automatic" variable, create on the "stack"
   * Deleted automatically when function returns
   */
  Space space(points, SIZE(points))); // points get copied to internal copy of space
  
}