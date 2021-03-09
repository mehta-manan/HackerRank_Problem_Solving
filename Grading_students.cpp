#include <bits/stdc++.h>

using namespace std;

vector<int> gradingStudents(vector<int> grades)
{
    vector<int> rounded_marks;

    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] < 38)
            rounded_marks.push_back(grades[i]);

        else
        {
            if ((grades[i] + 1) % 5 == 0)
                rounded_marks.push_back((grades[i] + 1));

            else if ((grades[i] + 2) % 5 == 0)
                rounded_marks.push_back((grades[i] + 2));

            else
                rounded_marks.push_back(grades[i]);
        }
    }
    return rounded_marks;
}