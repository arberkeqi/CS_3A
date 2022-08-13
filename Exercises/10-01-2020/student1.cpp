/**
 * Demo array of classes and new keyboard
 *
 * Copyright (c) 2020, Arber Keqi.
*/

#include "student.h"
#define MAX_Courses 3;
int main()
{
  Student p1("Jimmy neutron", MAX_Courses);
  std::string courses[] = {"Cs002", "CS003A", "CS008", "CS045"};


  for (int i = 0; i < MAX_Courses + 1) {
    dump(p1.addCourses(courses[i]), MAX_Courses);
  }
}