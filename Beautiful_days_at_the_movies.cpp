#include <bits/stdc++.h>

using namespace std;

int beautifulDays(int i, int j, int k)
{
    int c = 0;
    
    for (; i <= j; i++)
    {
        string rev_str = to_string(i);
        std::reverse(rev_str.begin(), rev_str.end());
        int rev_i = stoi(rev_str);

        if (abs(rev_i - i) % k == 0)
            c++;
    }
    
    return c;
}