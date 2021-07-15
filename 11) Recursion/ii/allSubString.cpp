#include "bits/stdc++.h"

using namespace std;

void subString(string s, string ans)
{

    if (s.length() == 0)
    {
        cout << ans<<endl;
        return;
    }

    char ch = s[0];
    subString(s.substr(1), ans + ch);
    subString(s.substr(1), ans);
}

int main()
{

    subString("ABC","");
    return 0;
}