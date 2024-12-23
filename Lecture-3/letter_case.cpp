#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter ch = ";
    cin >> ch;
    // ch>=65 && ch<=90
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Upper case\n";
    }
    // ch>=97 && ch<=122
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "LOwer case\n";
    }
    return 0;
}