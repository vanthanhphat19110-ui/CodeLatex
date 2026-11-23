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
};

int main()
{
    C object;
    cout << "A::x = " << object.A::x << ".\n"; // access x from A.
    cout << "B::x = " << object.B::x << ".\n"; // access x from B.
    return 0;

    // Result:
    // A::x = 10.
    // B::x = 20.
}