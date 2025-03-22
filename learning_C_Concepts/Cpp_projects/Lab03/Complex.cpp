#include "Complex.h"
#include <iostream>
using namespace std;
Complex::Complex()
{
    Real = 0;
    Imaginary = 0;
}

Complex::Complex(double r , double i)
{
    Real = r;
    Imaginary = i;
}

Complex Complex::operator+(Complex a){
    Complex T;
    T.Real = this->Real + a.Real;
    T.Imaginary = this->Imaginary + a.Imaginary;
    return T;
}

Complex Complex::operator*(Complex a){
    Complex T;
    T.Real = this->Real * a.Real;
    T.Imaginary = this->Imaginary * a.Imaginary;
    return T;
}

Complex operator*(int num,Complex a){
    a.Real = num * a.Real;
    return a;
}

Complex operator*(Complex a , int num){
    a.Imaginary = num * a.Imaginary;
    return a;
}

bool Complex::operator!=(Complex a){
    if (Real == a.Real && Imaginary == a.Imaginary) {
        return false;      
    }
    else
        return true;
}

void Complex::Print()
{
cout << "Real:"<<Real << endl;
cout << "Imaginary:"<<Imaginary << endl;
}

