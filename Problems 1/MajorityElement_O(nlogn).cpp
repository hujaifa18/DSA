#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 2, 1, 1};
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int feq = 1, ans = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            feq++;
        }
        else
        {
            feq = 1;
            ans = nums[i];
        }
        if (feq > (n / 2))
            cout << ans << endl;
    }
    return 0;
}