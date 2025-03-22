#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
public:
    Complex();
    Complex(double r, double i);
    Complex operator+(Complex);
    Complex operator*(Complex);
    bool operator!=(Complex);
    void Print();
private:
    double Real, Imaginary;
    friend Complex operator*(int , Complex);
    friend Complex operator*(Complex , int);
};
#endif // COMPLEX_H
