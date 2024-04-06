#include <iostream>
#include <utility>
using namespace std;
int main()
{
    pair<string, int> p;
    pair<string, int> q;
    p.first = "Sajib";
    p.second = 21;
    q = make_pair("Sabbir", 11);
    pair<string, int> m("Sakib", 75);

    cout << p.first << " " << p.second << endl;
    cout << q.first << " " << q.second << endl;
    cout << m.first << " " << m.second << endl;

    return 0;
}