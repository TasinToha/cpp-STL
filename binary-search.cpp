#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {1, 5, 8, 11, 14, 19, 25};
    // Binary Search can used with sorted list
    bool ans = binary_search(v.begin(), v.end(), 11);

    cout << ((ans) ? "Found" : "Not Found") << endl;

    vector<int>::iterator it;
    it = lower_bound(v.begin(), v.end(), 6);
    // When the lower_bound does not exist, then the pointer it will point at the end.
    cout << *it << endl;
    cout << distance(v.begin(), it) << endl;
    // cout << (it - v.begin()) << endl; // same as distance() function

    return 0;
}