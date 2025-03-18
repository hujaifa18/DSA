#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxprofit = 0, bestbuy = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > bestbuy)
            {
                maxprofit = max(maxprofit, prices[i] - bestbuy);
            }
            bestbuy = min(bestbuy, prices[i]);
        }
        return maxprofit;
    }
};
int main()
{
    Solution solution;
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> prices[i];
    }

    int result = solution.maxProfit(prices);
    cout << result << endl;

    return 0;
}