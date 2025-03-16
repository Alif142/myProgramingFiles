#include "Student.h"
#include <iostream>
#include <random>
using namespace std;
Student::Student()
{
    ID = 0;
    name = "";
    CGPA = 0.0;
}
Student::Student(int id , string name , float cgpa)
{
    this->ID = id;
    this ->name = name;
    this->CGPA = cgpa;
}

void Student::setID(int id){
    this->ID = id;
}

void Student::setName(string name){
    this->name = name;
}

void Student::setCGPA(float cgpa){
    this->CGPA = cgpa;
}

int Student::getID(){
    return this->ID;    
}

string Student::getName(){
    return this->name;    
}

float Student::getCGPA(){
    return this->CGPA;    
}

void Student::print(){
    cout<<"ID:"<<ID<<" Name:"<<name<<" CGPA:"<<CGPA<<endl;
}

bool operator==(Student &obj1 , Student &obj2){
    if (obj1.getID() == obj2.getID()) {
        return true; 
    }
    else {
        return false;
    }
} 

bool operator!=(Student &obj1 , Student &obj2){
    if (obj1.getID() != obj2.getID()) {
        return true; 
    }
    else {
        return false;
    }
} 
