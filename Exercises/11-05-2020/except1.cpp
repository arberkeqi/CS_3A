#include <cstdio>
#include <climits>

// Handle only positive values
double div(double a, double b) {
  if (b == 0) {
    throw "Can't divide by 0!";
  }
  if (a < 0 || b < 0) {
    throw "must be both positive";
  }
  return a/b;
}

enum AddError {
  NEGATIVE, BIG
};

#define MAX_VALUE INT_MAX / 2
// Special add, with condition
int add(int a, int b) {
  if (a > MAX_VALUE || b > MAX_VALUE) {
      throw AddError::BIG;
  }
  if (a < 0 || b < 0) {
      throw AddError::NEGATIVE;
  }
}

int main()
{
  double a, b;
  printf("a, b: ");
  scanf("%lf, %lf", &a, &b);

  // "Catch" the excpetion "thrown" by div()
  try {
    printf("%.1lf / %.1lf = %1lf\n", a, b, div(a,b));
  } catch (const char *err) {
     fprintf(stderr, "Error: %s\n", err); 
  }
}