#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
class Student
{
private:
    int ID;
    string NAME;
    float CGPA;
public:
    Student();
    Student(int id , string name , float cgpa);
    void setID(int value);
    int getID();
    void setName(string name);
    string getName();
    void setCgpa(float value);
    float getCgpa();
    void print();
    friend bool operator!=( Student &obj1 , Student &obj2); 
    friend bool operator==( Student &obj1 , Student &obj2); 
};

#endif // STUDENT_H
