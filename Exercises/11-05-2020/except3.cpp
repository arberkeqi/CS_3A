#include <cstdio>

class Default {
  public:
    const char *message() {
      return "unknown error";
    }
};

class DivByZero : public Default {
  public:
    const char *message() {
      return "division by zero";
    }
};

double div(int a, int b) {
  if (b == 0) {
    throw DivByZero();
  }
  return double(a / b);
}

int main()
{
  double a, b;
  printf("a, b: ");
  scanf("%d, %d", &a, &b);

  try {
    printf("%d / %d = %lf\n", a, b, div(a,b));
  } catch (Default &d) {
    fprintf(stderr, "Error: %s\n", d.message());
  }
}