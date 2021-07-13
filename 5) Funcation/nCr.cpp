#include <iostream>
#include <math.h>

using namespace std;

int factorial(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n, r;
    cout << "Enter value of n,r(nCr) : " << endl;
    cin >> n >> r;

    cout << n << "C" << r << " :" << factorial(n) / (factorial(n - r) * factorial(r)) << endl;

    return 0;
}
