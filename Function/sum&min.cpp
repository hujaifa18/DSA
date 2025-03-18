#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int s = a + b;
    return s;
}
int minoftwo(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    cout << sum(10, 20) << endl;
    cout << "min = " << minoftwo(10, 20) << endl;
    return 0;
}