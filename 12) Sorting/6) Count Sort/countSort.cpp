#include "bits/stdc++.h"

using namespace std;

void countSort(int arr[], int size)
{
    int mx = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }

    int count[mx + 1] = {0};
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }
    //  for(auto i:count){
    //     cout<<i<<" ";
    // }cout<<endl;
    int k = 0;
    for (int i = 0; i < mx + 1; i++)
    {
        while (count[i] != 0)
        {
            arr[k++] = i;
            count[i]--;
        }
    }

    // cout << mx;
}

int main()
{
    int arr[9] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    countSort(arr, 9);

    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}