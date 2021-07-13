#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    /*  to Skip second condition*/
    a[n] = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0, mx = -1;
    for (int i = 0; i < n; i++)
    {
        if(mx<a[i] && a[i]>a[i+1]){
            ans++;
        }
        mx=max(mx,a[i]);
    }
    cout << ans << endl;

    return 0;
}