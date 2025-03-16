#include "unsortedType.h"
#include <cstddef>
template <class T>
unsortedType<T>::unsortedType()
{
    head = NULL;        
    pointTo = NULL;
    size =0;
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
}

template <class T>
void unsortedType<T>::Search(T value ,bool &found){
    Node *i = head;
    found = false;

    while(i != NULL){
        if(value == i->data){
            found = true;
            break;
        }

        else {
            i = i->next;
        }
    }
}
