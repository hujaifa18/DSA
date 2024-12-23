#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout << "N = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    cout << "Sum = " << sum << endl;
    int j = 1, sum2 = 0;
    do
    {
        if (j % 2 == 0)
        {
            cout << j << " ";
            sum2 += j;
        }
        j++;
    } while (j <= n);
    cout << endl;
    cout << "Sum = " << sum2 << endl;
    int k = 1, sum3 = 0;
    while (k <= n)
    {
        if (k % 2 == 0)
        {
            cout << k << " ";
            sum3 += k;
        }
        k++;
    }
    cout << endl;
    cout << "Sum = " << sum3 << endl;
    return 0;
}