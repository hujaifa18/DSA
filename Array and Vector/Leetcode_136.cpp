#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int ans = 0;
    vector<int> num = {1, 1, 2, 2, 4};
    for (int val : num)
    {
        ans ^= val;
    }
    cout << ans << endl;
    return 0;
}