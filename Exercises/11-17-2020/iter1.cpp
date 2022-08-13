#include <map>
#include <string>
#include <cstdio>

int main()
{
  std::map<std::string, double> gpa1;
  gpa1["Jim"] = 3.79;
  gpa1["Lisa"] = 4.0;

  // Notice the begin(), end() and how you can increment
  for (auto it = gpa1.begin(); it != gpa1.end(); it++) {
    printf("%s: %.2ld\n", it->first.c_str(), it->second);
  }

  printf("\n");

  auto it1 = gpa1.begin();
  printf("%s: %.2ld\n", it1->first.c_str(), it1->second);
  it1++;
  printf("%s: %.2ld\n", it1->first.c_str(), it1->second);
  it1--;
  printf("%s: %.2ld\n", it1->first.c_str(), it1->second);

  printf("\n");

  // Difference like a pointer
  auto ent1 = *it1;
  printf("%s: %.2ld\n", ent1.first.c_str(), ent1.second);
}