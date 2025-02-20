#include "complex.h"
#include <iostream>

using namespace std;

int main()
{
    cout<<"Affition\n";
    Complex c1(2,4);
    Complex c2(2,4);
    Complex sum1 = c1+c2;
    sum1.Print();


    cout<<"Multiplication:\n";
    Complex mult1 = c1*c2;
    bool equal = c1!=c2;
    mult1.Print();

    cout<<"Equals:\n";
    if(equal == 0){
    cout<<"True";
    }
    else {
    cout<<"False";
    }
    return 0;
}
