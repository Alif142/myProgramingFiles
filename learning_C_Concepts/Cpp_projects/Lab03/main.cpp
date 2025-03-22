#include <iostream>
#include "Complex.h"
#include "dynArr.cpp"
using namespace std;

int main()
{
    Complex obj1(2,3);
    Complex obj2(2,4);
    if (obj1 != obj2) {
         cout<<"Not Equal";
    }
    else
        cout<<"Equal";
}
