#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;
class Student
{

    private:
        int ID;
        string name;
        float CGPA;
        
    public:
        Student();
        Student(int id , string name , float cgpa);
        void setID(int id);
        void setName(string name);
        void setCGPA(float cgpa);
        int getID();
        float getCGPA();
        string getName();
        void print();
        
        friend bool operator==(Student & , Student &);
        friend bool operator!=(Student & , Student &);
        
};

#endif // STUDENT_H
