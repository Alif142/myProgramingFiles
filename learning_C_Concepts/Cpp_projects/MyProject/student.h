#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;;
class student
{
    public:
    student(string name,int age);
    void dispay();


    private:
    string name;
    int age;
    
};

#endif // STUDENT_H
