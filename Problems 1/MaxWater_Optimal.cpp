#include <iostream>
#include <iomanip>
#include <climits>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int lp = 0, rp = height.size() - 1, ans = 0;
        while (lp < rp)
        {
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            int currentWater = w * ht;
            ans = max(ans, currentWater);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return ans;
    }
};
int main()
{
    Solution solution;
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    int result = solution.maxArea(height);
    cout << result << endl;
    return 0;
}