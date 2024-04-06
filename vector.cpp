#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vec (5, 3);
    vec.push_back(55);  // vec[5]=55
    vec.push_back(22);  // vec[6]=22

    cout << vec.size() <<endl;
    cout << "Hey There " << endl;

    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << "\t";
    }

    return 0;
}