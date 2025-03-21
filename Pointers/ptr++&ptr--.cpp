#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    cout << ptr << endl;
    ptr++;
    cout << ptr << endl; //+4 bytes
    ptr--;
    cout << ptr << endl; //-4 bytes
    return 0;
}
