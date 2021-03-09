#include <bits/stdc++.h>

using namespace std;

void staircase(int n)
{
    int k = n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int _k = 0; _k < k; _k++)
            std::cout << " ";

        for (int j = 0; j < i + 1; j++)
            std::cout << "#";

        std::cout << std::endl;
        k--;
    }
}