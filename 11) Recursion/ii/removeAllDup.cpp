#include "bits/stdc++.h"

using namespace std;

string removeAllDup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeAllDup(s.substr(1)); // store rest of no duplicate substr
    if (ch == ans[0])
    {
        return ans;
    }
    else
    {
        return ch + ans;
    }
}

int main()
{
    cout << removeAllDup("viisshhaalllvvxxx");
    return 0;
}