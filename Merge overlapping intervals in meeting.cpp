vector<vector<int>> solve(vector<vector<int>> &meet)
{
    sort(meet.begin(), meet.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (ans.empty() || meet[i][0] > ans.back()[1])
        {
            ans.push_back(meet[i]);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], meet[i][1]);
        }
    }
    return ans;
}

// NOTE:
// ans.back()[1] gives the second element
// ans.back()[0] gives the first element