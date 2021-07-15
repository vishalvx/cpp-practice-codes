#include "bits/stdc++.h"

using namespace std;

void reverseStr(string s)
{
    if (s.length() == 0)
    {
        return; //base case
    }
    reverseStr(s.substr(1));

    cout << s[0];
}

int main()
{
    reverseStr("vishalvx");
    return 0;
}