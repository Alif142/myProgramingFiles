#include "sortedType.h"
#include <iostream>
using namespace std;
template <class T>
SortedType<T>::SortedType(){
    data = new T[SIZE];
    currentSize = 0;
    pointTo = -1;
}
template <class T>
SortedType<T>::~SortedType(){
    delete [] data;
}

template <class T>
int SortedType<T>::Length(){
    return currentSize;
}

template <class T>
bool SortedType<T>::IsFull(){
    return (currentSize == SIZE);
}

template <class T>
void SortedType<T>::MakeEmpty(){
    currentSize = 0;
}


template <class T>
void SortedType<T>::Insert(T value){
    if (IsFull()) {
        cout<<"List is full";
    } 
    else {
        int i = 0;
        while (i < currentSize) {
            if (value > data[i]) {
                i++; 
            }
            else {
                for (int j = currentSize;j>i;j--) {
                    data[j] = data[j-1]; 
                }
                break;
            }
        }
        data[i] = value;
        currentSize++;
    }
}


template <class T>
void SortedType<T>::Search(T value , bool &found){
    int first = 0;
    int last = currentSize-1;
    int mid;
    found = false;
   while (first <= last) {
        mid= (first + last)/2;

        if (value > data[mid]) {
            first = mid + 1;
        }
        else if (value < data[mid]) {
            last = mid - 1; 
        }
        else {
            found = true;
            value = data[mid];
            break;
        }
    } 
}

template <class T>
void SortedType<T>::Delete(T value){
    bool found = false;
    int i =0;
    while (i<currentSize) {
        if (data[i] == value) {
            found = true;
            break;
        } 
        else
            i++;
    }

    if (found) {
        while (i< currentSize) {
            data[i] = data[i+1]; 
            i++;
        } 
        currentSize--;
    }
    else
        cout<<"Item not found"<<endl;
}

template <class T>
void SortedType<T>::GetNext(T &value){
    pointTo++;
    value = data[pointTo];
}

template <class T>
void SortedType<T>::Reset(){
    pointTo = -1;
}
