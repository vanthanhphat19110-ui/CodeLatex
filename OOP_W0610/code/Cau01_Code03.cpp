#include <iostream>
using namespace std;

class BaseClass01
{
private:
    int x1;

public:
    void input()
    {
        cout << "- Input x1: ";
        cin >> x1;
    }
};

class BaseClass02
{
private:
    int x2;

public:
    void input()
    {
        cout << "- Input x2: ";
        cin >> x2;
    }
};

class DerivedClass : public BaseClass01, public BaseClass02
{
};

int main()
{
    DerivedClass object;
    // object.input(); // ERROR: "DerivedClass::input" is ambiguous
    return 0;
}