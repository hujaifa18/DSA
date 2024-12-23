#include <iostream>
using namespace std;
int main()
// 1 bytes = 8 bits
{
    int age = 25;     // 4 bytes memory
    char ch = 'A';    // 1 bytes
    float PI = 3.14F; // 4 bytes
    // true - false
    bool istrue = true;
    bool isfalse = false;  // 1 byte
    double price = 100.99; // 8 bytes
    cout << age << endl;
    cout << sizeof(age) << endl; // calculate the memory size
    cout << ch << endl;
    cout << PI << endl;
    cout << istrue << endl;  // true -> 1
    cout << isfalse << endl; // false -> 0
    cout << price << endl;
    return 0;
}