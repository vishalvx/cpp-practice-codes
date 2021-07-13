#include <iostream>

using namespace std;

int sum(int number)
{
    int sum = 0;
    sum = (number * (number + 1)) / 2;

    return sum;
}
int main()
{
    int number;
    cout << "Enter Number : " << endl;
    cin >> number;

    cout << "Sum of " << number << " numbers is :" << sum(number) << endl;

    return 0;
}
