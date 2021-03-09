#include <bits/stdc++.h>

using namespace std;

vector<int> breakingRecords(vector<int> scores)
{
    vector<int> count = {0, 0};
    int max_element = scores[0], min_element = scores[0];

    for (int i = 0; i < scores.size(); i++)
    {
        int max_e = *std::max_element(scores.begin(), scores.begin() + i + 1);
        int min_e = *std::min_element(scores.begin(), scores.begin() + i + 1);

        if (max_element != max_e)
        {
            max_element = max_e;
            count[0]++;
        }

        if (min_element != min_e)
        {
            min_element = min_e;
            count[1]++;
        }
    }
    return count;
}
