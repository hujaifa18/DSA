#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 5, 3, 6, 4, 6};
    int sum = 0, prod = 1;
    int size = 7;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        prod *= arr[i];
    }
    cout << "Sum = " << sum << endl
         << "Product = " << prod << endl;
    return 0;
}