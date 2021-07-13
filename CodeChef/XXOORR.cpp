#include "bits/stdc++.h"

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        int n, k, count = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[33];
        
        for (int i = 0; i < 33; i++)
        {
            b[i]=0;
        }
        for (int i = 0; i < n; i++)
        {
            int j = 32;
            int x = a[i];
            while (x > 0)
            {
                b[j] = b[j] + x % 2;
                j--;
                x = x / 2;
            }
        }

        for (int i = 0; i < 33; i++)
        {
            if (b[i] % k == 0)
            {
                count = count + b[i] / k;
            }
            else if (b[i] % k != 0)
            {
                count = count + 1 + b[i] / k;
            }
        }

        cout << count << endl;
    }
    return 0;
}