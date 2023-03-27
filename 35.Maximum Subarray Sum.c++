#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 15;
    // int arr[n] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int arr[n] = {-7, -8, -16, -4, -8, -5, -7, -11, -10, -12, -4, -6, -4, -16, -10}; // corner case array
    long long sum = 0, maxi = LONG_MIN;
    int start = 0, end = 0; // to calculate the array start and end of max sub array
    for (int i = 0; i < 8; i++)
    {
        if (sum == 0) // if sum = 0 then new sub array start from here:
        {
            start = i;
        }
        sum += arr[i]; // add to sum array element
        if (sum > maxi)
        {
            maxi = sum; // maxumum sub array sum is stored here
            end = i;    // last index of it
        }
        if (sum < 0) // if sum is less than zero so no need to store it
        {
            sum = 0;
        }
    }
    // corner case for the input:
    // 15 -7 -8 -16 -4 -8 -5 -7 -11 -10 -12 -4 -6 -4 -16 -10
    // which will give negative maximum so if zero set it to be zero
    if (maxi < 0)
    {
        maxi = 0;
    }

    for (int i = start; i <= end; i++) // printing the array of max sub arrya sum
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << maxi;
}