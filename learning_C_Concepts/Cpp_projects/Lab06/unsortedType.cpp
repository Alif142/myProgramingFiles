#include <cstddef>
#include <iostream>
#include "unsortedType.h"
using namespace std;

template <class T>
unsortedType<T>::unsortedType(){
    head = NULL;
    pointTo = NULL;
    size = 0;
}
template <class T>
unsortedType<T>::~unsortedType(){
    MakeEmpty();
}
template <class T>
int unsortedType<T>::Length(){
    return size;
}
template <class T>
void unsortedType<T>::Insert(T value){
    Node *temp = new Node;
    temp->data = value;
    temp->next = head;
    head = temp;
    size++;

}
template <class T>
void unsortedType<T>::Search(T value , bool &found){
    Node *i = head;
    found = false;
    while (i != NULL) {
        if (i->data == value) {
            found = true;
            break;
        } 
        else
            i = i->next;
    }
}

template <class T>
void unsortedType<T>::Delete(T value){
    Node *i = head;
    Node *prev = NULL;
    bool found = false;

    while (i != NULL) {
        if (i->data == value) {
            found = true; 
            break;
        } 
        else
        i = i->next;
    }
    if (found) {
        if (prev == NULL) {
            head = i->next; 
        }      
        else {
            prev->next = i->next;
        }
        delete i;
        size--;
    }
}

template <class T>
void unsortedType<T>::MakeEmpty(){
    Node *i = head;
    Node *next;
    while (i != NULL) {
        next = i->next; 
        delete i;
        i = next;
    }
    head = NULL;
    size = 0;
}
template <class T>
void unsortedType<T>::GetNext(T &value){
    if (pointTo == NULL) {
        pointTo = head; 
        value = pointTo->data;
    } 
    else {
        value = pointTo->data;
    }
    pointTo = pointTo->next;
}
template <class T>
void unsortedType<T>::Reset(){
    pointTo = NULL;
}

