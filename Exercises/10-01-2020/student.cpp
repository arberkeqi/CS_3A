/**
 * Array of classes and new keyboard
 *
 * Copyright (c) 2020, Arber Keqi.
*/

#include "student.h"

/**
 * New student, with max defined for courses. note the name
 * "_availableCourses" for the member variable to clearly spell out
 * its purpose.
 * - name: Student name, cannot be null or empty
 * - maxCourses: max number of courses
 */

// Note the use of the name _availableCourses to show meaning 
Student::Student(std::string name, int maxCourses) : _name(name), _maxCourses(maxCourses) {
  _courses = new std::string[maxCourses]; // Note the "new" keyword, space created on the heap
}

// Destructor, Responsible to clean up
Student::~Student() {
  std::cout<<"Destructor" << std::endl;
  delete [] _courses; // Keyword delete goes hand to hand with new
}

/**
 * Adds course if possible and returns updated list
 * - course: Course name, should not be null or empty
 */

std::string *Student::addCourses(std::string course) {
  // Check bad conditions first ("sad" path)
  if(_currentCourseIndex == _maxCourses) {
    return _courses;
  }
  _courses[_currentCourseIndex++] = course; // Note that this is postfix
  return _courses;
}