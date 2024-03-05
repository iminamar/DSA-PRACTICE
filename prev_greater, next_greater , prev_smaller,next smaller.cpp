#include<iostream>
#include <stack>
#include <vector>
using namespace std;

// Function to find the next smaller element
vector<int> nextSmallerElement(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }
        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}

// Function to find the previous smaller element
vector<int> previousSmallerElement(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() >= arr[i])
            st.pop();
        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}

// Function to find the previous greater element
vector<int> previousGreaterElement(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }
        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}

// Function to find the next greater element
vector<int> nextGreaterElement(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }
        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}

void display(vector<int> &arr)
{
    for(auto i:arr)
        cout<<i<<" ";
    cout<<endl;
}

int main()
{
    // vector<int> arr = {4, 8, 2, 1, 6, 10, 5};
    vector<int> arr = {2, 1, 5, 6, 2, 3};
    vector<int> temp = nextGreaterElement(arr);
    display(temp);
    temp = previousGreaterElement(arr);
    display(temp);
    temp = nextSmallerElement(arr);
    display(temp);
    temp = previousSmallerElement(arr);
    display(temp);
    return 0;
    
}