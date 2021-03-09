#include <bits/stdc++.h>

using namespace std;

// string valley_generator(int length)
// {
//     string valley;
//     int mid = length / 2;

//     for (int i = 1; i <= length; i++)
//     {
//         if (i <= mid)
//             valley += "D"; // valley[i] = 'D'
//         else
//             valley += "U";
//     }
//     return valley;
// }

// string sub_string(int pos, int i, string s)
// {
//     string str = "";
//     for (int x = pos; x <= i; x++)
//     {
//         str += s[x];
//     }
//     return str;
// }
// int countingValleys(int steps, string path)
// {
//     int level = 0, pos = -1, count = 0;
// 
//     for (int i = 0; i < steps; i++)
//     {
//         if (path[i] == 'D')
//          level--;
//         
//         else
//             level++;
// 
//         if (level == 0)
//         {
//             string sstr = sub_string(pos + 1, i, path);
//             if (sstr == valley_generator(sstr.size()))
//                  count++;
//             
//             pos = i;
//         }
//     }
//     return count;
// }

int countingValleys(int steps, string path)
{
    int level = 0, count = 0;

    for (int i = 0; i < steps; i++)
    {
        if (path[i] == 'D')
            level--;

        else
            level++;

        if (level == 0 && (path[i] == 'U'))
            count++;
    }
    return count;
}
