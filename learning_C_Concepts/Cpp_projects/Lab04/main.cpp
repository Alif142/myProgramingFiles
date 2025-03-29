#include <iostream>
#include "unsortedType.cpp"
#include "Student.h"
using namespace std;
void printFound(bool found){
    if (found) 
        cout<<"Item found"; 
    else
        cout<<"Item not found";
}
template <class T>
void printList(UnsortedType<T> &list){
    list.Reset(); 
    int value;
    for (int i=0;i<list.Length();i++) {
        list.GetNext(value); 
        cout<<value <<" ";
    }
    cout<<endl;
}

int main(){
    UnsortedType<Student>list;
    Student s1(12121,"Alif",3.1);
    Student s2(12122,"Mahin",3.3);
    Student s3(12123,"Tahsin",3.5);
    Student s4(12124,"Soad",3.7);
    Student s5(12125,"Soad",3.9);

    list.Insert(s1);
    list.Insert(s2);
    list.Insert(s3);
    list.Insert(s4);
    list.Insert(s5);

    Student st;
    for (int i=0;i<list.Length();i++) {
        list.GetNext(st);
        if (st.getID() == 12125) {
            list.Delete(st); 
        }
    }

    list.Reset();
    for (int i=0;i<list.Length();i++) {
        list.GetNext(st);
        st.print();
    }
}
