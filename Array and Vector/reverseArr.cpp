#include <iostream>
using namespace std;
void reverseArr(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {2, 1, 3, 5, 4, 7, 8, 6};
    int size = 8;
    reverseArr(arr, 8);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}