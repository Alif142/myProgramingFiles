#include "dynArr.h"
#include <iostream>
#include <iterator>
using namespace std;
dynArr::dynArr()
{
    data = NULL;
    rows = 0;
    cols = 0;
}

dynArr::dynArr(int r,int c){
    data = new int*[r];
    for (int i=0;i< r ;i++) {
        data[i] = new int[cols]; 
    }
    rows = r;
    cols = c;
}

dynArr::~dynArr()
{
    for (int i = 0; i< rows; i++) {
        delete [] data[i]; 
    }
    delete [] data;
}


int dynArr::getValue(int i , int j)
{
    return data[i][j];
}


void dynArr::setValue(int i,int j, int value){
    data[i][j] = value;
}

void dynArr::allocate(int newRows,int newCols ){

    int **newData = new int *[newRows];

    for (int i=0; i< newRows ; i++) {
        newData[i] = new int[newCols]; 
    }


    for (int i=0 ;i<rows && i< newRows; i++ ) {
        for (int j=0 ;j< cols && j< newCols ; j++) {
            newData[i][j] = data[i][j];
        }
    }
    
    data = newData;
    rows = newRows;
    cols = newCols;
}








