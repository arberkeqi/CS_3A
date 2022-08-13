#include <iostream>

/**
 * Declaration, without definition - will
 * compile, but needs to be "linked" with the defining
 * file (namespace3.cpp in this case)
 */
void inc();

// Creating a namescpace
namespace A {
  int x = 100;
  namespace C {
    int x = 300;
  }
}

namespace B {
  int x = 200;
}

//unnamed namespace
namespace {
  int x = 400;
}

int main()
{
  std::cout << A::x << std::endl;
  std::cout << B::x << std::endl;
  std::cout << A::C::x << std::endl; //nasted namespace

  std::cout << "x = " << x << std::endl;
  inc();
}
