#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b)
{
    vector<int> amounts = {-1};

    for (int i = 0; i < keyboards.size(); i++)
    {
        for (int j = 0; j < drives.size(); j++)
        {
            if (keyboards[i] + drives[j] <= b)
                amounts.push_back(keyboards[i] + drives[j]);
        }
    }

    return *std::max_element(amounts.begin(), amounts.end());
}
