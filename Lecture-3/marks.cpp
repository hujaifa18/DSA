#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Mark is = ";
    cin >> marks;
    if (marks >= 90)
    {
        cout << "A\n";
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "B\n";
    }
    else
    {
        cout << "C\n";
    }
    return 0;
}