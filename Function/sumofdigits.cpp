#include <iostream>
using namespace std;
int sumofdigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int lastdig = n % 10;
        n /= 10;
        sum += lastdig;
    }
    return sum;
}
int main()
{
    cout << "sum = " << sumofdigits(2356) << endl;
    return 0;
}