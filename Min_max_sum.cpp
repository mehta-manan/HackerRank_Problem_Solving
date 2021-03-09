#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector<int> arr)
{
    std::sort(arr.begin(), arr.end());
    long min_sum = 0, max_sum = 0;
    std::for_each(arr.begin(), arr.begin() + 4, [&min_sum](int x) {min_sum += x; return min_sum; });
    std::for_each(arr.rbegin(), arr.rbegin() + 4, [&max_sum](int x) {max_sum += x; return max_sum; });
    std::cout << min_sum << " " << max_sum;
}
