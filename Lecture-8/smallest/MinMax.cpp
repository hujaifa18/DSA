#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;
// INT_MAX == +infinity
int main()
{
    int num[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        smallest = min(num[i], smallest); // instead of if-else compare
        largest = max(num[i], largest);
    }
    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;
    return 0;
}