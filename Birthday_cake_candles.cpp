#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(vector<int> candles)
{
    return std::count(candles.begin(), candles.end(), *std::max_element(candles.begin(), candles.end()));
}