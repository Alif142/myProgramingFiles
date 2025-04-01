#include <iostream>
#include "unsortedType.cpp"
using namespace std;

int main()
{
    unsortedType<int> list;
    list.Insert(1);
    list.Insert(2);
    list.Insert(3);
    list.Insert(4);
    list.Insert(5);
    int value;
    for (int i=0;i<list.Length();i++) {
        list.GetNext(value);
        cout<<value<<" ";
    }
    return 0;
}
