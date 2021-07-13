#include "bits/stdc++.h"

using namespace std;

int updateBit(int n, int x, int value)
{
    n = (n & ~(1 << x));
    n = n | value << x;
    return n;
}
int main()
{
    int n, x, value;
    cin >> n >> x >> value;

    cout << updateBit(n, x, value) << endl;
    return 0;
}