#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter A,B And C Value: " << endl;
    cin >> a >> b >> c;

    // by using simple if / else
    if (a > b)
    {
        if (a > c)
        {
            cout << "A is MAX" << endl;
        }
        else
            cout << "C is Max" << endl;
    }
    else
    {
        if (b > c)
        {
            cout << "B is MAX" << endl;
        }
        else
            cout << "C is Max" << endl;
    }

    // By using ternary Opertor 
    // cout << (a > b ? (a > c ? "A is max" : "C is max") : (b > c ? "B is Max" : "C is Max")) << endl;
}