#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(vector<int> h, string word)
{
    map<char, int> char_num;
    vector<int> values;

    for (int i = 97; i <= 122; i++)
        char_num[static_cast<char>(i)] = h[i - 97];

    for (int i = 0; i < word.size(); i++)
        values.push_back(char_num.find(word[i])->second);

    return (*std::max_element(values.begin(), values.end())) * word.size();
}