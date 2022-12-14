/**
 * 
 *
 * Copyright (c) 2020, Arber Keqi.
*/

#include <cstdio>
#include "color.h"

Color::Color(double r, double g, double b) :
  _r(_fix(r)), _g(_fix(g)), _b(_fix(b)) {
}

void Color::setR(double r) {
  _r = _fix(r);
}

void Color::setG(double g) {
  _g = _fix(g);
}

void Color::setB(double b) {
  _b = _fix(b);
}

// Must be a "friend" function to see the private members
void dump(Color c) {
  printf("(%.2lf, %.2lf, %.2lf)\n", c._r, c._g, c._b);
}

double Color::_fix(double v) {
  if (v < 0) {
    return 0.0;
  }
  if (v > 1) {
    return 1.0;
  }
  return v;
}