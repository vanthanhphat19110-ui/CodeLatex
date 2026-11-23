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
    // cout << object.x; // ERROR: "C::x" is ambiguous
    return 0;
}