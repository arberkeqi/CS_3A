#include <map>
#include <string>
#include <cstdio>

#define SIZE(a) (sizeof(a) / sizeof(a[0]))

int main()
{
  // Regular array
  std::string names1[] = {"Jim", "Lisa"};
  double gpa2[] = {3.79, 4.0};
  for (int i = 0; i < SIZE(names1); i++) {
    printf("%s: %.2ld\n", names1[i].c_str(), gpa2[i]);
  }

  printf("\n");

  // Associative array
  // Note that the keys are always sorted in a C++ map
  std::map<std::string, double> gpa;
  gpa["Jim"] = 3.79;
  gpa["Lisa"] = 4.0;
  for (auto &e : gpa) {
    printf("%s: %.2ld\n", e.first.c_str(), e.second);
  }

  printf("\n");

  // Another way to iterate through a map
  for (auto it = gpa.begin(); it != gpa.end(); it++) {
    printf("%s: %.2ld\n", it->first.c_str(), it->second);
  }
}