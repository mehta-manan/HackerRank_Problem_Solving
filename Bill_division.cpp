#include <bits/stdc++.h>

using namespace std;

void bonAppetit(vector<int> bill, int k, int b)
{
    bill.erase(std::find(bill.begin(), bill.end(), bill[k]));

    long sum = std::accumulate(bill.begin(), bill.end(), 0);
    
    long b_actual = sum / 2;

    if (b > b_actual)
        std::cout << b - b_actual;
    else
        std::cout << "Bon Appetit";
}
