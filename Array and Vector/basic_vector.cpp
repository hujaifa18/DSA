#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> vec;

    cout << "Size = " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(55);
    cout << "Size 2 = " << vec.size() << endl;
    vec.pop_back();
    cout << "Size 3 = " << vec.size() << endl;
    cout << "Capacity = " << vec.capacity() << endl;
    for (int val : vec)
    {
        cout << val << endl;
    }
    cout << vec.at(0) << endl;
    return 0;
}