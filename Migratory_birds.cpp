#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(vector<int> arr)
{
    std::sort(arr.begin(), arr.end());

    map<int, int> element_count;
    vector<int> _count;

    for (const auto a : arr)
    {
        int number_of_a_element = std::count(arr.begin(), arr.end(), a);

        //element_count[a] = std::count(arr.begin(), arr.end(), a);
        element_count.emplace(std::make_pair(a, number_of_a_element));
        
        arr.erase(std::remove(arr.begin(), arr.end(), a), arr.end());
    }

    for (auto [key, value] : element_count)
    {
        _count.push_back(value);
    }

    int max_e = *std::max_element(_count.begin(), _count.end());
    
    for (auto ec : element_count)
    {
        if (ec.second == max_e)
            return ec.first;
    }
    
    return 0;
}
