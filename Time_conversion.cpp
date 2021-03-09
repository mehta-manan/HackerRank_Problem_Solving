#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s)
{
    string _hh = s.substr(0, 2);
    string type = s.substr(8, 2);

    int hh = stoi(_hh);

    if (type == "AM")
    {
        string new_hh = to_string(hh);
        if (hh == 12)
            new_hh = "00";
        else if (hh < 10)
        {
            new_hh = "0" + new_hh;
        }
        string sstr = s.substr(2, 6);
        return new_hh + sstr;
    }
    else
    {
        if (hh != 12)
        {
            hh += 12;
            string new_hh = to_string(hh);
            string sstr = s.substr(2, 6);
            return new_hh + sstr;
        }
        string sstr = s.substr(0, 8);
        return sstr;
    }
}