#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
    set<int> s;
    set<int>::iterator it;
    s.insert(15);
    s.insert(20);
    s.insert(5);

    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    // set function returns iterators.
    set<string> m;
    m.insert("Dip");
    m.insert("Reza");
    m.insert("Arnob");
    pair<set<string>::iterator, bool> p;
    p = m.insert("Arnob");

    if (p.second == false)
    {
        cout << "Can't insert." << endl;
    }
    else
    {
        cout << "Inserted." << endl;
    }

    return 0;
}