#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<float> myList;
    list<float>::iterator it;

    myList.push_back(10);
    myList.push_back(15);
    myList.push_back(5);
    myList.push_front(6);
    myList.push_front(8);
    myList.push_back(77);

    myList.reverse(); // Reverse all the element in the list
    cout << myList.size() << endl;

    for (it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << "  ";
    }

    myList.clear();
    cout << myList.size() << endl;

    return 0;
}