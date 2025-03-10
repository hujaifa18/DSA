#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int num[size];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << endl;
    }
    return 0;
}