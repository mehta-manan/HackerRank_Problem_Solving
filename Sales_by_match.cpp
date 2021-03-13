#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector<int> ar)
{
    int number_of_pairs = 0;

    std::sort(ar.begin(), ar.end());

    for (auto a : ar)
    {
        int c = 0;

        if (a != 0)
            c = std::count(ar.begin(), ar.end(), a);

        std::replace(ar.begin(), ar.end(), a, 0);

        number_of_pairs = (c % 2 == 0) ? number_of_pairs + (c / 2) : number_of_pairs + ((c - 1) / 2);
    }
    
    return number_of_pairs;
}