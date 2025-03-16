#include <iostream>
#include "unsortedtype.cpp"

using namespace std;

void printSearch(bool found)
{
    if (found)
        cout << "value is found" << endl;
    else
        cout << "value is not found" << endl;
}

/** pass by reference */
template <class T>
void Print(UnsortedType<T> &list)
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
    /*

    // Create a list of integers
    UnsortedType<int> list;

    // Insert four values
    list.Insert(5);
    list.Insert(7);
    list.Insert(6);
    list.Insert(9);

    // Print the list
    Print(list);

    // Print the length of the list
    cout << "Length: " << list.Length() << endl;

    // Insert one value
    list.Insert(1);

    // Print the list
    Print(list);

    // Search 4 and print whether found or not
    bool found;
    list.Search(4, found);
    printSearch(found);

    // Search 5 and print whether found or not
    list.Search(5, found);
    printSearch(found);

    // Search 9 and print whether found or not
    list.Search(9, found);
    printSearch(found);

    // Search 10 and print whether found or not
    list.Search(10, found);
    printSearch(found);

    // Delete 5
    list.Delete(5);

    // Print the list
    Print(list);

    // Delete 1
    list.Delete(1);

    // Print the list
    Print(list);

    // Delete 6
    list.Delete(6);

    // Print the list
    Print(list);
    */

    UnsortedType<int> firstList;
    UnsortedType<int> secondList;

    firstList.Insert(10);
    firstList.Insert(1);
    firstList.Insert(5);
    firstList.Insert(6);
    firstList.Insert(10);
    firstList.Insert(14);
    firstList.Insert(20);
    firstList.Insert(25);
    firstList.Insert(31);
    firstList.Insert(38);
    firstList.Insert(40);

    secondList.Insert(12);
    secondList.Insert(2);
    secondList.Insert(4);
    secondList.Insert(7);
    secondList.Insert(9);
    secondList.Insert(16);
    secondList.Insert(19);
    secondList.Insert(23);
    secondList.Insert(24);
    secondList.Insert(32);
    secondList.Insert(35);
    secondList.Insert(36);
    secondList.Insert(42);

    int num;
    int length = secondList.Length();

    for (int i = 0; i < length; i++)
    {
        secondList.GetNext(num);
        firstList.Insert(num);
        secondList.Delete(num);
    }

    int max;
    bool found;

    while(firstList.Length() != 0)
    {
        firstList.Reset();
        firstList.GetNext(num);
        max = num;
        for (int i = 0; i < firstList.Length(); i++)
        {
            firstList.GetNext(num);
            if (num > max)
                max = num;
        }

        firstList.Delete(max);
        secondList.Search(max, found);
        if (!found)
            secondList.Insert(max);
    }

    for (int i = 0; i < secondList.Length(); i++)
    {
        secondList.GetNext(num);
        cout << num << " ";
    }

    return 0;
}
