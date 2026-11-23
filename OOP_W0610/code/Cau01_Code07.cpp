#include <iostream>
using namespace std;

class A
{
public:
    int x = 10;
};

class B
{
public:
    int x = 20;
};

class C : public A, public B
{
public:
    using A::x; // in default: access x from A.
};

int main()
{
    C object;
    cout << "C::x = " << object.x << ".\n";
    return 0;

    // Result:
    // C::x = 10.
}