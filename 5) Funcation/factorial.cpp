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
    int number;
    cout << "Enter Number : " << endl;
    cin >> number;

    cout << "factorial of " << number << " is :" << factorial(number) << endl;

    return 0;
}
