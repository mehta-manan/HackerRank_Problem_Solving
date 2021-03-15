#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p)
{
    int left_even_page, right_odd_page;
    int flips_from_front = 0, flips_from_back = 0;

    left_even_page = 0, right_odd_page = 1;

    while ((left_even_page != p && right_odd_page != p) && (left_even_page <= p) && (right_odd_page <= p))
    {
        flips_from_front++;
        left_even_page += 2;
        right_odd_page += 2;
    }

    if (n % 2 == 0)
    {
        left_even_page = n;
        right_odd_page = left_even_page + 1;
    }
    else
    {
        right_odd_page = n;
        left_even_page = right_odd_page - 1;
    }

    while ((left_even_page != p && right_odd_page != p) && (left_even_page >= 0) && (right_odd_page >= 1))
    {
        flips_from_back++;
        left_even_page -= 2;
        right_odd_page -= 2;
    }

    if (flips_from_front < flips_from_back)
        return flips_from_front;
    else
        return flips_from_back;
}