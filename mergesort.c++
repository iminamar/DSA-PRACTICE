#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> ans;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            ans.push_back(arr[left]);
            left++;
        }
        else
        {
            ans.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        ans.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        ans.push_back(arr[right]);
        right++;
    }
    cout << "low = " << low << "   "
         << "high = " << high << endl;
    for (int i = low; i <= high; i++)
    {
        cout << arr[i] << "   " << ans[i - low] << endl;
        arr[i] = ans[i - low];
    }
    cout << endl
         << endl;
}
void mergesort(vector<int> &arr, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    vector<int> arr = {5, 3, 2, 4, 1};
    int n = arr.size();
    mergesort(arr, 0, n - 1);
    cout << "\n";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}