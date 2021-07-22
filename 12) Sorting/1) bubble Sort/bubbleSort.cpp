#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
Bubble Sort Function
*/
void bubbleSort(int arr[], int size)
{
    bool isSwapped = false;
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        isSwapped = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;

                isSwapped = 1;
            }
        }
        if (!isSwapped)
            break;
    }
}
/*
MAIN Function
*/
int main()
{
    int size;
    cout << "Enter size of array : " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter Element of array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, size);

    cout << "sorted Array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << i[arr] << " ";
    }

    return 0;
}