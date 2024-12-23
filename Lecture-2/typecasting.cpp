#include <iostream>
using namespace std;
int main()
{
    // implicit -> type conversion
    char grade = 'A';
    int value = grade;
    cout << value << endl;
    // explicit -> type casting
    double price = 100.99;
    int newprice = (int)price;
    cout << newprice << endl;
    return 0;
}