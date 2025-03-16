#include "sortedType.cpp"
#include <iostream>

using namespace std;

int main()
{
    SortedType<int> list;
    list.Insert(5);
    list.Insert(4);
    list.Insert(2);
    list.Insert(1);
    int num;
    for (int i = 0;i<list.Length();i++) {
        list.GetNext(num); 
        cout<<num<<" ";
    }
}
