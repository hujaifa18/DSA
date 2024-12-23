#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = a--;
    cout << "b = " << b << endl; // 10
    cout << "a = " << a << endl; // 9
    int c = 10;
    int d = --c;
    cout << "d =" << d << endl; // 9
    cout << "c =" << c << endl; // 9
    return 0;
}