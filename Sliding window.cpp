// sliding window optimized:
// maximum sub in the given subarray window:

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n = 9;
    int k = 4;
    int sum = 0;
    int ans = INT_MIN;
    for (int i = 0; i < k; i++)
    {
        sum = sum + arr[i];
    }
    ans = sum;
    for (int i = 1; i <= n - k; i++)
    {
        sum += arr[i + k - 1] - arr[i - 1];
        ans = max(ans, sum);
    }
    cout << "ans: " << ans;
    return 0;
}