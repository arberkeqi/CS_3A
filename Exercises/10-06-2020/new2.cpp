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
  /**
   * Stack: points variable 
   * Heap: Array of 3 points pointed to by points
   */
  Point points[3];


  // Explicitly delete memory create with new
  // otherwise, ther would be a memory leak
  delete points;
}