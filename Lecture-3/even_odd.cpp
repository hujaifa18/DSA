#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even\n";
    }
    else
    {
        cout << "Odd\n";
    }
    return 0;
}