#include "bits/stdc++.h"

using namespace std;

bool mycompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{

    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<pair<int, int>> v;

    for (int i = 0; i < size; i++)
    {
        v.push_back(make_pair(arr[i], i));
    }
    // to compare p[i],p[i+1] 's first  element

    sort(v.begin(), v.end(), mycompare);

    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }
    for (auto &&i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}