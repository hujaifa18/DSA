#include <iostream>
using namespace std;
void changeArr(int arr[], int size)
{
    cout << "In Function\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 2};
    changeArr(arr, 3);
    cout << "In Main\n";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}