#include <bits/stdc++.h>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    vector<int> ans = {0, 0};

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
            ans[0]++;
        else if (b[i] > a[i])
            ans[1]++;
    }

    return ans;
}