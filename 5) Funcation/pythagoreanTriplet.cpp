#include <iostream>

using namespace std;

bool isPythagoreanTriplet(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == (b * b + c * c))
        return true;
    else
        return false;
}

int max(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    int x, y, z;
    cout << "Enter Triplat Numbers : " << endl;
    cin >> x >> y >> z;
    if (isPythagoreanTriplet(x, y, z))
        cout << "Pythagorean Triplat.";
    else
        cout << "Not a Pythagorean Triplat.";

    return 0;
}
