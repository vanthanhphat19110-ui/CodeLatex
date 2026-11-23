#include <iostream>
using namespace std;

class Base
{
public:
    void fun() { cout << "Base.\n"; };
};

class Parent01 : virtual public Base // virtual inheritance.
{
};

class Parent02 : virtual public Base // virtual inheritance.
{
};

class Child : public Parent01, public Parent02
{
};

int main()
{
    Child object;
    object.fun(); // no ambiguous error.
    return 0;

    // Result:
    // Base.
}