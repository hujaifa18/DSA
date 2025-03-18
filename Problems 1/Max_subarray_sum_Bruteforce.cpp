#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxsum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentsum = 0;
        for (int end = st; end < n; end++)
        {
            currentsum += arr[end];
            maxsum = max(currentsum, maxsum);
        }
    }
    cout << "Max Subarray Sum = " << maxsum << endl;
    return 0;
}