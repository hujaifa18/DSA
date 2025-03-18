#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 7;
    cout << (a & b) << endl;//AND
    cout << (a | b) << endl;//OR
    cout << (a ^ b) << endl;//XOR
    cout << (b << 1) << endl;//Left shift
    cout << (b >> 1) << endl;//Right shift
    return 0;
}