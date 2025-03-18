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
        int maxwater = 0;
        for (int i = 0; i < height.size(); i++)
        {
            for (int j = i + 1; j < height.size(); j++)
            {
                int w = j - i;
                int ht = min(height[i], height[j]);
                int currentWater = w * ht;
                maxwater = max(maxwater, currentWater);
            }
        }
        return maxwater;
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