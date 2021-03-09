#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr)
{
    std::cout << (float)std::count_if(arr.begin(), arr.end(), [](int i) { return i > 0; }) / arr.size();
    std::cout << std::endl;
    std::cout << (float)std::count_if(arr.begin(), arr.end(), [](int i) { return i < 0; }) / arr.size();
    std::cout << std::endl;
    std::cout << (float)std::count_if(arr.begin(), arr.end(), [](int i) { return i == 0; }) / arr.size();
}