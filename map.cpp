#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main()
{
    map<string, int> m;
    m["Mahin"] = 32;
    m["Alu"] = 21;
    m.insert(make_pair("Tasin", 15));

    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}