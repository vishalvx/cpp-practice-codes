#include "bits/stdc++.h"

using namespace std;

int GCD(int a, int b)
{
    int rem = 1;
    while (rem)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    cout << GCD(2, 2) << endl;
    return 0;
}