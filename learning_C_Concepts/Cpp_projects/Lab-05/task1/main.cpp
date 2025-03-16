#include <iostream>
#include "sortedtype.cpp"
#include "timestamp.h"

using namespace std;

void printSearch(bool found)
{
    if (found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;
}

template <class T>
void Print(SortedType<T> &list)
{
    int num;

    list.Reset();

    for (int i = 0; i < list.Length(); i++)
    {
        list.GetNext(num);
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    // Create a list of integers
    SortedType<int> list;

    // Insert five items
    list.Insert(5);
    list.Insert(7);
    list.Insert(4);
    list.Insert(2);
    list.Insert(1);

    // Print the length of the list
    cout << "Length: " << list.Length() << endl;

    // Print the list
    Print(list);

    // Search 6 and print whether found or not
    bool found;
    list.Search(6, found);
    printSearch(found);

    // Search 5 and print whether found or not
    list.Search(5, found);
    printSearch(found);

    // Print if the list is full or not
    cout << (list.IsFull() ? "List is full" : "List is not Full") << endl;

    // Delete 1
    list.Delete(1);

    // Print the list
    Print(list);

    // Print if the list is full or not
    cout << (list.IsFull() ? "List is full" : "List is not Full") << endl;

    // Create a list of objects of class timeStamp
    SortedType<timeStamp> list2;

    timeStamp t1(15, 34, 23);
    timeStamp t2(13, 13, 02);
    timeStamp t3(43, 45, 12);
    timeStamp t4(25, 36, 17);
    timeStamp t5(52, 02, 20);

    // Insert 5 time values in the format ss:mm:hh
    list2.Insert(t1);
    list2.Insert(t2);
    list2.Insert(t3);
    list2.Insert(t4);
    list2.Insert(t5);

    // Delete the timestamp 25 36 17
    list2.Delete(t4);

    // Print the list
    timeStamp store;
    cout << "SS:MM:HH" << " [Sorted by hours (HH)]" << endl;
    for (int i = 0; i < list2.Length(); i++)
    {
        list2.GetNext(store);
        store.printTime();
    }

    return 0;
}
