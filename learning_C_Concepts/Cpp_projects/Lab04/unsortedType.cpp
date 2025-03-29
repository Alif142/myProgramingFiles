#include "unsortedType.h"
#include <iostream>
#include <iterator>
#include <stdio.h>
using namespace std;

template<class T>
UnsortedType<T>::UnsortedType(){
    data = new T[SIZE];
    currentSize = 0;
    pointTo = -1; 
}

template<class T>
UnsortedType<T>::~UnsortedType(){
    delete[] data;
}

template<class T>
int UnsortedType<T>::Length(){
   return currentSize; 
}

template<class T>
bool UnsortedType<T>::IsFull(){
   return (SIZE == currentSize); 
}

template<class T>
void UnsortedType<T>::MakeEmpty(){
        currentSize = 0;
}

template<class T>
void UnsortedType<T>::Insert(T value){
    if (IsFull()) {
        cout<<"List is full"; 
    }  
    else {
        data[currentSize] = value; 
        currentSize++;
    }
}


template<class T>
void UnsortedType<T>::Search(T value , bool &found){
    found = false;
    for (int i=0;i<currentSize;i++) {
        if (data[i] == value) {
            found = true;
            break;
        } 
    }
}

template<class T>
void UnsortedType<T>::Delete(T value){
    bool found = false;
    int i=0;
    for (i=0;i<currentSize;i++) {
        if (data[i] == value) {
            found = true;
            break;
        } 
    }

    if (found) {
        data[i] = data[currentSize -1]; 
        currentSize--;
    }
    else {
        cout << "Error: Item could not be found in the list" << endl; 
    }
}


template<class T>
void UnsortedType<T>::GetNext(T &value){
    pointTo++;
    value = data[pointTo];
}

template<class T>
void UnsortedType<T>::Reset(){
    pointTo = -1;
}



