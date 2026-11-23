#include <iostream>
using namespace std;

class Base
{
public:
    void fun() { cout << "Base.\n"; };
};

class Parent01 : public Base
{
};

class Parent02 : public Base
{
};

class Child : public Parent01, public Parent02
{
};

int main()
{
    Child object;
    // object.fun(); // ERROR: "Child::fun" is ambiguous
    return 0;
}