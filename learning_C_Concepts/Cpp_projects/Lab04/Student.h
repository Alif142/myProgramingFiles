#ifndef STUDENT_UNSORTEDTYPE
#define STUDENT_UNSORTEDTYPE


#include <string>
class Student
{
    public:
    Student(std::string name , int id ,float cgpa);
        
    protected:

    private:
        std::string name;
        float cgpa;
        int id;
};

#endif // STUDENT_UNSORTEDTYPE
