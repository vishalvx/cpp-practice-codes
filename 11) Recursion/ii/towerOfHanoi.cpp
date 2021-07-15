#include "bits/stdc++.h"

using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper)
{

    if (n == 1)
    {
        cout << "dish moves 1 " << src << " to " << dest << endl;
        return;
    }

    towerOfHanoi(n - 1, src, helper, dest);

    cout << "dish moves " << n << " " << src << "to " << dest << endl;

    towerOfHanoi(n - 1, src, dest, helper);
}

int main()
{
    towerOfHanoi(3, 'A', 'C', 'B');
    return 0;
}