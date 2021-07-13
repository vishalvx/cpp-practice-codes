#include "bits/stdc++.h"

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        int n, note, total = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int min = *min_element(a, a + n);
        int *max = max_element(a, a + n);

        // cout<< min << " " << max;

        if (min < 10)
        {
            note = min;
        }
        else
        {
            for (int i = 0; i <= 9; i++)
            {
                if (min % i == 0)
                    note = min % i;
            }
        }

        *max=note;
        
        for (int i = 0; i < n; i++)
        {
            total+=a[i]/note;
        }
        
        cout<<total<<endl;

    }
    return 0;
}