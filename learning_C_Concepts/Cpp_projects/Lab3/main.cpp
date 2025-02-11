#include <iostream>
#include "dynArr.cpp"
#include "dynArr.h"


using namespace std;

int main()
{
    dynArr<char> arr1(4);
    char value;

    for (int i=0;i<4;i++) {
        cout<<"Enter value for i["<<i<<"]:"; 
        cin>>value;
        arr1.setValue(i,value);
    }


    for (int i=0;i<4;i++) {
        cout<<arr1.getValue(i);
    }


    return 0;
}
