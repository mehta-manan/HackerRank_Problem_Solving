#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n)
{
    int share = 5, like, cummulative = 0;

    for (int i = 1; i <= n; i++)
    {
        like = (share / 2);
        cummulative += like;
        share = like * 3;
    }
    
    return cummulative;
}
