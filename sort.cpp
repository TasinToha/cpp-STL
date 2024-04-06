#include <iostream>
#include <vector>
#include <algorithm>

bool myFunc(int a, int b){
    return (a > b);
}

using namespace std;

int main()
{
    vector <int> vec;
    vector <int>::iterator it;

    vec.push_back(43);
    vec.push_back(14);
    vec.push_back(74);
    vec.push_back(53);
    vec.push_back(39);
    vec.push_back(65);

    sort(vec.begin(), vec.end());   // sort the vector in ascending order
    sort(vec.begin(), vec.end(), myFunc);   // sort the vector in descending order

    // Printing the vector
    for(it = vec.begin(); it != vec.end(); it++){
        cout << *it <<"\t";
    }

    return 0;
}   