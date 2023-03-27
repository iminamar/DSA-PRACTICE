int majorityElement(vector<int> v)
{
    // Write your code here
    int count = 0;
    int el;
    for (int i = 0; i < v.size(); i++)
    {
        if (count == 0)
        {
            count = 1;
            el = v[i];
        }
        else if (v[i] == el)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == el)
        {
            count++;
        }
    }
    if (count > v.size() / 2)
    {
        return el;
    }
    else
    {
        return -1;
    }
}

// https://www.codingninjas.com/codestudio/problems/majority-element_6783241?leftPanelTab=1
// https://www.youtube.com/watch?v=nP_ns3uSh80&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=22&ab_channel=takeUforward