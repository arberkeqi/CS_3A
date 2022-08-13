#include <iostream>

/**
 * This makes all the symbols in the std namespace 
 * available without qualifier - DO NOT DO THIS
*/
//using namespace std;

// Better, but not ideal 
using std::cout;
using std::endl;

int main()
{
  // Ok, because you have "usig std::cout, etc."
  cout << "Using cout, not std::cout" << endl;

/**
 * This is the best because you're honoring the namespace 
 * and there is no chance of a name clash
 */
  std::cout << "Using cout, not std::cout" << endl;
}