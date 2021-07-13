#include "bits/stdc++.h"

using namespace std;

bool isPowerOfTwo(int n)
{
    return (n && !(n & n-1));
}

int main()
{
    int n;
    cin >> n;

    cout << (isPowerOfTwo(n) ? "is power  two" : "not power two") << endl;
    return 0;
}