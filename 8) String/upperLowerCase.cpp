#include "bits/stdc++.h"

using namespace std;

int main()
{

    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] <= 'z' && str[i] >= 'a')
            str[i] -= 32;
        else
            str[i] += 32;
    }

    cout << str;
    return 0;
}