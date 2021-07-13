#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n, s;

    cin >> n >> s;

    int a[n], i = 0, j = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (sum <= s && j < n)
    {
        sum += a[j];
        j++;
    }
    if (sum == s)
    {
        cout << i + 1 << " " << j;
    }
    while (sum > s && i < j)
    {
        sum -= a[i];
        i++;
    }
    if (sum == s)
    {
        cout << i + 1 << " " << j << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}