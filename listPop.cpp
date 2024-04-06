#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    int ar[5] = {5, 2, 1, 6, 3};

    list<int> myList(ar, ar + 5);
    list<int>::iterator it;

    myList.pop_front();
    myList.pop_back();

    for (it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << "  ";
    }
}