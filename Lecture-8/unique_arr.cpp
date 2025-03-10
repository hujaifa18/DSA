#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 4};
    int size = 7;
    int num[size];
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] != i)
            {
                num[size] = arr[j];
            }
        }
    }
    cout << num[size] << endl;
    return 0;
}