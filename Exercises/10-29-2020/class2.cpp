#include <cstdio>

#define SIZE(a) (sizeof(a) / sizeof(a[0]))


class  Animal
{
  private:
    double _weight;

  public:
    Animal(double weight) : _weight(weight) {
    }
    virtual const char *name() {
      return "Animal";
    }
    // Only definition, inherited by ALL derived classes (any level)
    double weight(){
      return _weight;
    }
};

/**
 * Inherits weight( from Animal, but NOT _weight)
 */
class Cat : public Animal {
  public:
  Cat(double weight) : Animal(weight) {
  }
  // Cat "overrides"
  const char *name() {
    return "Cat";
  }
  // sound() redefine
  const char *sound() {
    return "Meow";
  }
};

class Dog : public Animal {
  public:
  Dog(double weight) : Animal(weight) {
  }
  // Dog "overrides"
  const char *name() {
    return "Dog";
  }
  // sound() redefine
  const char *sound() {
    return "Woof";
  }
};

class Alsatian : public Dog {
  public:
    Alsatian(double weight) : Dog(weight) {
    }
    // Alsatian "overrides" name()
    const char *name() {
    return "Alsatian";
  }
    // Alsatian redefine sound() with its own implementation
    const char *sound() {
      return "Growl";
    }
};

void dump1(Animal a) {
  printf("%s: weight %1lf, sound '%s'\n", a.name(), a.weight());
}

void dump2(Animal &a) {
  printf("%s: weight %1lf, sound '%s'\n", a.name(), a.weight());
}

int main()
{
  Cat c1(3.2);
  Dog d1(5.1);
  Alsatian a1(6.2);

  dump1(c1); dump1(d1); dump1(a1);

  printf("\n");

  dump2(c1); dump2(d1); dump2(a1);
}