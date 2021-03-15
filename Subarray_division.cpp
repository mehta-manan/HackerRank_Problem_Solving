#include <bits/stdc++.h>

using namespace std;

int birthday(vector<int> s, int d, int m)
{
    int count = 0;
    for (auto it = s.begin(); it + m <= s.end(); it++)
    {
        if (std::accumulate(it, it + m, 0) == d)
            count++;
    }
    return count;
}
