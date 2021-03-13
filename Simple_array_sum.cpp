#include <bits/stdc++.h>

using namespace std;

int simpleArraySum(vector<int> ar)
{
    return std::accumulate(ar.begin(), ar.end(), 0);
}