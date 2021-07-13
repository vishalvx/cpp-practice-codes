#include "bits/stdc++.h"

using namespace std;

int findLargestWord(char ca[])
{
    int max = 0, i = 0, curr = 0;
    while (1)
    {
        if (ca[i] == ' ' || ca[i] == '\0')
        {
            if (max < curr)
            {
                max = curr;
            }
            curr = 0;
        }
        curr++;
        if (ca[i] == '\0')
            break;

        i++;
    }

    return max;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char ca[n + 1];
    cin.getline(ca, n);
    cin.ignore();

    // int i = 0;
    // while (ca[i] != '\0')
    // {
    //     cout << ca[i] << " ";
    //     i++;
    // }

    cout << findLargestWord(ca) << endl;

    return 0;
}