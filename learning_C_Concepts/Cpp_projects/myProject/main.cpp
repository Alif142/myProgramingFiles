#include <alloca.h>
#include <iostream>
#include "dynArr.h"
using namespace std;

int main()
{
    /*
    int size = 3;
    dynArr arr1;
    dynArr arr2(size);

    for (int i=0;i<size;i++) {
        int value;
        cout<<"Enter value:";
        cin>>value;
        arr2.setValue(i,value);
    }

    for (int i=0;i<3;i++) {
        cout<<arr2.getValue(i);
    }
*/

    int size = 2;
    dynArr arr1(3);

    for (int i =0;i<size;i++) {
        int value;
        cout<<"Enter values:";
        cin>>value;
        arr1.setValue(i,value);
    }


    for (int i =0;i<size;i++) {
        cout<<arr1.getValue(i) << endl;
    }


    int newSize = 5;
    alloca(size);


    for (int i =size;i<newSize;i++) {
        int value;
        cout<<"Enter new values:";
        cin>>value;
        arr1.setValue(i,value);
    }


    for (int i =0;i<newSize;i++) {
        cout<<arr1.getValue(i) << endl;
    }



    return 0;
}
