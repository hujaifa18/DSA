#include <iostream>
using namespace std;
int main()
{
    int i, n, fact = 1;
    cout << "N = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Fact = " << fact << endl;
    int j = 1, fact1 = 1;
    do
    {
        fact1 = fact1 * j;
        j++;
    } while (j <= n);
    cout << "Fact = " << fact1 << endl;
    int k = 1, fact2 = 1;
    while (k <= n)
    {
        fact2 = fact2 * k;
        k++;
    }
    cout << "Fact = " << fact2 << endl;

    return 0;
}