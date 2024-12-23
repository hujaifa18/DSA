#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 10;
    int sum = a + b;
    int diff = a - b;
    int multi = a * b;
    int divide = b / a;
    /*int/int = int
    int/float or double = decimal value
    float or double = decimal value
    do type conversion in cout*/
    int rem = b % a;
    cout << sum << endl;
    cout << (a + b) << endl;
    cout << diff << endl;
    cout << (a - b) << endl;
    cout << multi << endl;
    cout << (a * b) << endl;
    cout << divide << endl;
    cout << (b / a) << endl;
    cout << rem << endl;
    cout << (b % a) << endl;
    return 0;
}