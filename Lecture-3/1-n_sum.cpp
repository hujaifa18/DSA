#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, sum1 = 0;
    cout << "n = ";
    cin >> n;
    while (i <= n)
    {
        cout << i << " ";
        sum1 += i;
        i++;
    }
    cout << "Sum = " << sum1;
    cout << endl;
    int j = 1;
    int sum_ = 0;
    do
    {

        cout << j << " ";
         sum_ += j;
        j++;
       

    } while (j <= n);
    cout << "Sum = " << sum_;
    cout << endl;
    int sum2 = 0;
    for (i = 1; i <= n; i++)
    {
        cout << i << " ";
        sum2 += i;
    }
    cout << "Sum = " << sum2;
    cout << endl;
    return 0;
}