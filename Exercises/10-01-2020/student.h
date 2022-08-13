/**
 * Array of classes and new keyboard
 *
 * Copyright (c) 2020, Arber Keqi.
*/

#include <string>

#include <iostream>

void dump(std::string *courses, int maxCourses)
{
  for(int i = 0; i < maxCourses; i++) {
    std::cout << "Course" << i+1 << ": " << courses[i] << std::endl;
  }
}

class Student
{
private:
  std::string _name;
  std::string *_courses; // Note the * to denote pointer to std::string array
  int _maxCourses;
  int _currentCourseIndex = 0;

public:
  Student(std::string, int);
  ~Student();
  std::string *addCourses(std::string); // This returns the update alias list
};