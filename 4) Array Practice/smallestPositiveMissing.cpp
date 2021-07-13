#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    const int N = 1e6 + 2;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }

    for (int i = 0; i < n; i ++)
    {
        check[a[i]] = true;
    }

    for (int i = 1; i < N; i++)
    {
        if (check[i] == false)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}