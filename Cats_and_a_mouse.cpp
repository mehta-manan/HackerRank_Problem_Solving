#include <bits/stdc++.h>

using namespace std;

string catAndMouse(int x, int y, int z)
{
    while (x != z && y != z)
    {
        if (x < z)
            x++;
        else
            x--;

        if (y < z)
            y++;
        else
            y--;
    }

    if (x == z && y != z)
        return "Cat A";
    else if (y == z && x != z)
        return "Cat B";
    else
        return "Mouse C";
}
