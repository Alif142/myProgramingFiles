#include "student.h"
#include <string>

student::student(string s, int a) {
  name = s;
  age = a;
}

void student::dispay() { cout << "Name:" << name << "\n" << "Age:" << age <<endl; }
