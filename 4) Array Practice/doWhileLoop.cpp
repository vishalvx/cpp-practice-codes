#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Rule: If You negetive Number, you will exit the Loop.. \n";
    cin >> number;
    do
    {
        /* code */
        cout << "Valid Number \n";
        cin >> number;
    } while (number >= 0);
    cout << "invalid Number";
}