#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Arnob");
    s.push("Bob");
    s.push("Max");
    s.push("Pops");

    while (!s.empty()) // loop will continue untill stack is empty
    {
        string x;
        x = s.top(); // top value of stack
        cout << x << endl;
        s.pop(); // remove item from stack
    }

    return 0;
}