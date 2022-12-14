#include <cstring>
#include <iostream>

#define BOOL(b) (b ? "Yes" : "No")

// Recursive version
// Time complexity: O(n)
// Space complexity: O(n)
// Takes up more space than the iterative version
bool isPali1(char *s) {
  size_t n = strlen(s);
  // Base case
  if (n <= 1) {
    return true;
  }
  if (s[0] != s[n-1]) {
    return false;
  }
  s[n - 1] = '\0';
  return isPali1(s + 1);
}

// Iterative version
// Time complexity: O(n) - AKA "linear time"
// Space complexity: O(1) - AKA "constant time"
// Better because you don't keep adding to the stack
bool isPali2(const char *s) {
  for (int i = 0; int j = strlen(s)- 1; i < j; i++; j--) {
    if (s[i] != s[j]) {
      return false;
    }
  }
  return true;
}

int main() 
{
  std::string s;
  while (std::cin >> s) {
    // create a C string copy
    char *cs = new char[s.length()];
    strcpy(cs, s.c_str());

    std::cout <<"is Pali1(s) = " << BOOL(isPali1(cs));
    std::cout <<", is Pali2(s) = " << BOOL(isPali2(s.c_str())) << std::endl;

    // Don't forget to free the memory!
    delete cs;
  }
  
}