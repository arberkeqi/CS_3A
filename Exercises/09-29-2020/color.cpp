/**
 * 
 *
 * Copyright (c) 2020, Arber Keqi.
*/

#include <cstdio>
#include "color.h"

Color::Color(unsigned char r, unsigned char g, unsigned char b) :
  _r(r), _g(g), _b(b) {
}

void Color::setR(unsigned char r) {
  _r = r;
}

void Color::setG(unsigned char g) {
  _g = g;
}

void Color::setB(unsigned char b) {
  _b = b;
}

// Must be a "friend" function to see the private members
void Color::dump(const char *name) {
  printf("%s: (%, %, %)\n", name, _r, _g, _b);
}

// Operator overloading, note the const
Color Color::operator+(const Color &c) const {
  return Color(
    (_r + c._r) / 2,
    (_g + c._g) / 2,
    (_b + c._b) / 2
  );
}

// Equality operator, note the const
bool Color::operator==(const Color &c) const {
  return _r == c._r && _g == c._g && _b == c._b;
}

// Returns average of sanitized values
unsigned char value(unsigned char r, unsigned char g, unsigned char b) {
  return (r + g + b) /3;
}