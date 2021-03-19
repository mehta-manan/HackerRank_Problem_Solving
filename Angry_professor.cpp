#include <bits/stdc++.h>

using namespace std;

string angryProfessor(int k, vector<int> a)
{
    int c = std::count_if(a.begin(), a.end(), [](int x) { return x <= 0; });

    if (c < k)
        return "YES";
    else
        return "NO";
}
