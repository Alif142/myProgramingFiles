#include "Student.h"
#include <iostream>

Student::Student(){
    ID = 0;
    NAME = "";
    CGPA = 0.0;
}
Student::Student(int id , string name , float cgpa){
    this->ID = id;
    this->NAME = name;
    this->CGPA = cgpa ;
}

int Student::getID(){
    return ID;
}
string Student::getName(){
    return NAME;
}
float Student::getCgpa(){
    return CGPA;
}


void Student::setID(int id){
    this->ID = id;
}
void Student::setName(string name){
    this->NAME = name;
}
void Student::setCgpa(float cgpa){
    this->CGPA = cgpa;
}

void Student::print(){
    cout<<"Name:"<<NAME<<endl<<"ID:"<<ID<<endl<<"CGPA:"<<CGPA<<endl;
}

bool operator!=(Student &obj1 , Student &obj2){
    if (obj1.getID() != obj2.getID()) 
        return true; 

    else
        return false;
}
bool operator==(Student &obj1 , Student &obj2){
    if (obj1.getID() == obj2.getID()) 
        return true; 

    else
        return false;
}
