#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "N = ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i <= n - 1; i++)
    // for(int i = 2; i*i <=n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime\n";
    }
    else
    {
        cout << "Not Prime\n";
    }
    return 0;
}