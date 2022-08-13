/**
 * 
 *
 * Copyright (c) 2020, Arber Keqi.
*/

class Color {
 private:
  unsigned char _r, _g, _b;  // Note the underscore in names
  unsigned char _fix(unsigned char);  // Helper function

 // Member functions defined outside, separately
 public:
  // Constructor, parameter names are optional
  Color(unsigned char, unsigned char, unsigned char);

  // Mutators (AKA setters)
  void setR(unsigned char);
  void setG(unsigned char);
  void setB(unsigned char);

  // Utility, potentially for debugging
  void dump(const char *);

  // Operator overloading
  Color operator+(const Color &) const;
  bool operator==(const Color &) const;
  Color &operator++(); // Note the & in the type - Prefix
  Color operator++(int); // by putting int it is Postfix
};

 // Overloading
 unsigned char value(unsigned char, unsigned char, unsigned char);