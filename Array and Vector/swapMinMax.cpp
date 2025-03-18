#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {12, 25, 3, 15, -36, 100, 1, -50};
    int size = 8;
    int minIndex = -1, maxIndex = -1;
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            minIndex = i;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            maxIndex = i;
        }
    }
    if (minIndex != -1 && maxIndex != -1)
    {
        swap(arr[minIndex], arr[maxIndex]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}