/**
 * Main application to use color
 *
 * Copyright (c) 2020, Arber Keqi.
*/

#include <cstdio>
#include "color.h"

int main() {
  Color c1(0.5, -1, 2);
  c1.dump("c1");  // (0.50, 0.00, 1.00)

  // Increment each member value
  printf("\n");
  Color c2 = ++c1;
  c1.dump("++c1");
  c2.dump("c2");

  // Increment each member value
  printf("\n");
  Color c3 = c1++;
  c1.dump("c1++");
  c3.dump("c3");
}