#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int sz1 = 5;
    int arr2[] = {5, 6, 7, 8, 9};
    int sz2 = 5;
    int num = 0;
    for (int i = 0; i < sz1; i++)
    {
        for (int j = 0; j < sz2; j++)
        {
            if (i == j)
            {
                num = arr1[i];
            }
        }
    }
    cout << num << endl;
    return 0;
}