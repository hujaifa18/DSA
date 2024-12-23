#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    // a++ --> kaam ; update
    int b = a++;                 // assign->kaam then update
    cout << "b = " << b << endl; // 10
    cout << "a = " << a << endl; // 11
    int d = 10;
    //++a --> update ; kaam
    int c = ++d;
    // assign->kaam then update
    cout << "c = " << c << endl; // 11
    cout << "d = " << d << endl; // 11
    return 0;
}