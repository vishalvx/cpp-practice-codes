#include "bits/stdc++.h"

using namespace std;

void sieveOfErotosthenes(int n)
{
    int arr[n] = {0};

    for (int i = 2; i < n; i++)
    {
        for (int j = i * i; j < n; j += i)
        {
            arr[j] = 1;
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] != 1)
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    sieveOfErotosthenes(50);
    return 0;
}