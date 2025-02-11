#include "dynArr.h"
#include <iostream>
#include <iterator>
using namespace std;

dynArr::dynArr(){
    data = NULL;
    size = 0;
}

dynArr::dynArr(int s){
    data = new int[s];
    size = s;
}

dynArr::~dynArr(){
    delete [] data;
}

int dynArr::getValue(int index){
    return data[index];
}

void dynArr::setValue(int index, int value){
    data[index] = value;


}

void dynArr::allocate(int s){
    int *newData = new int[s];
    for (int i=0;i<size && i <s ;i++) {
        newData[i] =  data[i]; 
    }
    delete [] data;
    data = newData;
    size = s;

}





