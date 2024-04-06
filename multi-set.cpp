#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<string, int> m;
    multimap<string, int>::iterator it;

    m.insert(make_pair("Dipto", 41));
    m.insert(make_pair("Tipto", 42));
    m.insert(make_pair("Supto", 43));

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}