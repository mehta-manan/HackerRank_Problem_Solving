#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    vector<int> range_apples;
    vector<int> range_oranges;

    for (const auto &apple : apples)
    {
        range_apples.push_back(apple + a);
    }

    for (const auto &orange : oranges)
    {
        range_oranges.push_back(orange + b);
    }

    int apple_count = 0, orange_count = 0;

    for (const auto &apple : range_apples)
    {
        if (apple >= s and apple <= t)
            apple_count++;
    }

    for (const auto &orange : range_oranges)
    {
        if (orange >= s && orange <= t)
            orange_count++;
    }

    std::cout << apple_count << std::endl
              << orange_count;
}