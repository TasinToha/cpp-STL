#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> num (4, 1);
    vector <int>::iterator it;

    for (it = num.begin(); it != num.end(); it++)
    {
        cout << *it << "\t";
    }
    
    
}