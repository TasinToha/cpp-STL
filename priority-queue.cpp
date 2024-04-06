#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> q;
    q.push(40);
    q.push(400);
    q.push(20);
    q.push(100);
    q.push(5);
    // Priority Queue sorts everything in ascending orrder
    while (!q.empty())
    {
        int x;
        x = q.top();
        cout << x << endl;
        q.pop();
    }

    return 0;
}