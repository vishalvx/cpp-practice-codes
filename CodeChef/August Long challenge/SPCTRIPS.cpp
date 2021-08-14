/*
Challenge : August Long Challenge
Problem 4: Special Triplets 

by making table i get common solution.
note: 
A triplet of integers (A,B,C) is considered to be special if it satisfies the following properties for a given integer N :

A mod B=C  (we can say that B>C)
B mod C=0  ( B is multiple of C  C=k*B)

*/

#include <iostream>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int ans = 0;

        for (int c = 1; c <= n; c++)
        {

            for (int b = 2 * c; b <= n; b += c)
            {
                ans += (1 + (n - c) / b);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
