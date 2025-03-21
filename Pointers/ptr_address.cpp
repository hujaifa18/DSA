#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    float price = 100.00;
    float *ptr2 = &price;
    cout << ptr << endl;
    cout << &a << endl;
    cout << &ptr << endl;
    cout << ptr2 << endl;
    cout << &price << endl;
    return 0;
}
