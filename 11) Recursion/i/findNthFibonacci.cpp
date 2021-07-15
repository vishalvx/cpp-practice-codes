#include "bits/stdc++.h"

using namespace std;

int findNthFibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return findNthFibonacci(n - 1) + findNthFibonacci(n - 2);
}

int main()
{

    cout << findNthFibonacci(4) << endl;
    return 0;
}