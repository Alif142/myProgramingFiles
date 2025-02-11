#include "dynArr.h"
#include <iostream>
#include <iterator>

using namespace std;

int main(){
    int rows,cols,input;
    cout<<"Enter rows and cols:";
    cin>>rows >>cols ;

    dynArr arr1(rows,cols);

    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            cout<<"i["<<i << "]["<<j << "]:"; 
            cin>>input;
            arr1.setValue( i, j, input);
        } 
    }


    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
           cout<< arr1.getValue(i,j);
        }
        cout<<endl;
    }

    return 0;
}
