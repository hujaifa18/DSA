#include <iostream>
using namespace std;
int prime(int n)
{
    bool isprime = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime == true)
    {
        cout << "Prime" << endl;
        ;
    }
    else
    {
        cout << "Not Prime" << endl;
        ;
    }
    return isprime;
}
int main()
{
    prime(10);
    prime(3);
    return 0;
}