#include<iostream>
#include "Student.h"
#include "unsortedList.cpp"
#include "unsortedList.h"
using namespace std;
int main()
{
    Student s1(2222257,"Alif",3.1);
    Student s2(2222258,"Mahin",3.3);
    Student s3(2222259,"Soad",3.5);
    Student s4(15642,"Tahsin",3.7);
    Student s5(2222251,"Saffat",3.9);
    UnsortedType<Student>list;
    list.Insert(s1);
    list.Insert(s2);
    list.Insert(s3);
    list.Insert(s4);
    list.Insert(s5);
    Student st;

    for (int i=0;i<list.Length();i++) {
        list.GetNext(st);
        if (st.getID() == 15642) {
            list.Delete(st); 
        }
    }

    list.Reset();

    for (int i=0;i<list.Length();i++) {
        list.GetNext(st);
        st.print();
    }


}
