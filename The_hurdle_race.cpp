#include <bits/stdc++.h>

using namespace std;

int hurdleRace(int k, vector<int> height)
{
    int max_e = *std::max_element(height.begin(), height.end());

    if (max_e - k < 0)
        return 0;
    else
        return max_e - k;
}