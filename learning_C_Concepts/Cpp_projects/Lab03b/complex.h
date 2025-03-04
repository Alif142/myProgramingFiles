#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
class Complex
{
private:
    double Real, Imaginary;

public:
    Complex();
    Complex(double r, double i);
    Complex operator+(Complex);
    Complex operator*(Complex);
    bool operator!=(Complex);
    void Print();

};
#endif // COMPLEX_H_INCLUDED
