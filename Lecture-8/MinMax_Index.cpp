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
    int index;
    for (int i = 0; i < size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
            index = i;
        }
    }
    cout << "Smallest = " << smallest << " Index = " << index << endl;
    for (int i = 0; i < size; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
            index = i;
        }
    }
    cout << "Largest = " << largest << " Index = " << index << endl;
    return 0;
}