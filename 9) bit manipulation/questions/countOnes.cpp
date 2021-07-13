#include "bits/stdc++.h"

using namespace std;

int countOnes(int n)
{
    int count = 0;
    // while (true)
    // {

    //     if (n & n - 1)
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         count++;
    //         break;
    //     }
    //     n = n & n - 1;
    // }
    while (n)
    {
        n = n & n - 1;
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    cout << countOnes(n) << endl;

    return 0;
}