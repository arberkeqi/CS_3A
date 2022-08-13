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

namespace {
  const char *addErrors[] = {
    "must both be positive",
    "argument too large, may overflow",
  };
}

#define MAX_VALUE INT_MAX / 2
// Special add, with condition
int add(int a, int b) {
  if (a >= MAX_VALUE || b >= MAX_VALUE) {
      throw AddError::BIG;
  }
  if (a < 0 || b < 0) {
      throw AddError::NEGATIVE;
  }
  return a + b;
}

int main()
{
  double a, b;
  printf("a, b: ");
  scanf("%d, %d", &a, &b);

  // "Catch" the excpetion "thrown" by div()
  try {
    printf("%d / %d = %d\n", a, b, add(a,b));
  } catch (const char *err) {
      fprintf(stderr, "Error: %s\n", err); 
  } catch (AddError err) {
      fprintf(stderr, "Error: %s\n", addErrors[int(err)]); 
  }
}