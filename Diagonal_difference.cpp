#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr)
{
    int leftDiagonalSum = 0, rightDiagonalSum = 0, leftCounter = 0, rightCounter = arr.size() - 1;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (i == j)
            {
                leftDiagonalSum += arr[i][leftCounter];
                leftCounter++;
                rightDiagonalSum += arr[i][rightCounter];
                rightCounter--;
            }
        }
    }
    
    return abs(rightDiagonalSum - leftDiagonalSum);
}