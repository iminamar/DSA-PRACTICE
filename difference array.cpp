#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> elements(n, 0);
    vector<int> diff(n, 0);

    cout << "Enter the initial values of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> elements[i];
    }

    int numQueries;
    cout << "Enter the number of queries: ";
    cin >> numQueries;

    for (int q = 0; q < numQueries; q++)
    {
        int updateValue;
        int l, r;

        cout << "Enter the update value for query " << q + 1 << ": ";
        cin >> updateValue;

        cout << "Enter the range [l, r] for query " << q + 1 << " (0-based indexing): ";
        cin >> l >> r;

        diff[l] += updateValue;
        if (r + 1 < n)
            diff[r + 1] -= updateValue;
    }

    for (int i = 1; i < n; i++)
    {
        diff[i] += diff[i - 1];
        elements[i] += diff[i];
    }

    cout << "Updated array: ";
    for (int i = 0; i < n; i++)
        cout << elements[i] << " ";

    return 0;
}
