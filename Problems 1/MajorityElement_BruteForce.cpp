#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 2, 1, 1};
    int n = nums.size();
    for (int val : nums)
    {
        int feq = 0;
        for (int el : nums)
        {
            if (el == val)
            {
                feq++;
            }
        }
        if (feq > (n / 2))
        {
            cout << val << endl;
        }
    }
    return 0;
}