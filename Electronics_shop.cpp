#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b)
{
    vector<int> amounts;

    for (int i = 0; i < keyboards.size(); i++)
    {
        for (int j = 0; j < drives.size(); j++)
        {
            if (keyboards[i] + drives[j] <= b)
                amounts.push_back(keyboards[i] + drives[j]);
        }
    }

    if (amounts.size() == 0)
        return -1;
    else
        return *std::max_element(amounts.begin(), amounts.end());
}
