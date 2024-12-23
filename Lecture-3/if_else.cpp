#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    if (n >= 0)
    {
        cout << "Positive" << endl;
    }
    else
    {
        cout << "Negative" << endl;
    }
    cout << (n >= 0 ? "Positive" : "Negative") << endl;
    return 0;
}