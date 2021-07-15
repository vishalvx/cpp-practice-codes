#include "bits/stdc++.h"

using namespace std;

int fect(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return (n * fect(n-1));
}

int main()
{

    cout << fect(5) << endl;
    return 0;
}