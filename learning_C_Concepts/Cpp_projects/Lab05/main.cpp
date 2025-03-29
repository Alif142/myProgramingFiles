#include <iostream>
#include "sortedType.cpp"
#include "timeStamp.h"
using namespace std;
void isFound(bool found){
    if (found) 
        cout<<"Item found";
    
    else
        cout<<"Item not found";
}
int main()
{
    SortedType<timeStamp> list;
    timeStamp t1(15,34,23);
    timeStamp t2(13,13,02);
    timeStamp t3(43,45,12);
    timeStamp t4(25,36,17);
    timeStamp t5(52,02,20);

    list.Insert(t1);
    list.Insert(t2);
    list.Insert(t3);
    list.Insert(t4);
    list.Insert(t5);

    timeStamp t;
    for (int i=0;i<list.Length();i++) {
        list.GetNext(t); 
        t.print();
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;


    list.Delete(t4);
    list.Reset();
    for (int i=0;i<list.Length();i++) {
        list.GetNext(t); 
        t.print();
    }
    return 0;
}
