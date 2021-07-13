#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter The Number For Checking Even/Odd : " << endl;
    cin >> number;
    if (number % 2 == 0)
        cout << "Enter Number " << number << " is Odd";
    else
        cout << "Enter Number " << number << " is Even";
}