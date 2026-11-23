#include <iostream>
#include <string>
using namespace std;

// Function template.
template <typename T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    // Use function mySwap() for "int".
    int x = 3, y = 4;
    mySwap(x, y);
    cout << "x = " << x << ", y = " << y << ".\n";

    // Use function mySwap() for "float".
    float a = 3.14, b = 2.71;
    mySwap(a, b);
    cout << "a = " << a << ", b = " << b << ".\n";

    // Use function mySwap() for "string".
    string s = "DSA", t = "OOP";
    mySwap(s, t);
    cout << "s = " << s << ", t = " << t << ".\n";

    return 0;

    // Result:
    // x = 4, y = 3.
    // a = 2.71, b = 3.14.
    // s = OOP, t = DSA.
}