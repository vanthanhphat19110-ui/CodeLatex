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

    void output() const { cout << "==> x1 = " << x1 << ".\n"; }
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

    void output() const { cout << "==> x2 = " << x2 << ".\n"; }
};

class DerivedClass : public BaseClass01, public BaseClass02
{
};

int main()
{
    DerivedClass object;
    object.BaseClass01::input(); // call input() from BaseClass01.
    object.BaseClass02::input(); // call input() from BaseClass02.

    object.BaseClass01::output(); // call output() from BaseClass01.
    object.BaseClass02::output(); // call output() from BaseClass02.

    return 0;

    // Result:
    // - Input x1: 5
    // - Input x2: 10
    // ==> x1 = 5.
    // ==> x2 = 10.
}