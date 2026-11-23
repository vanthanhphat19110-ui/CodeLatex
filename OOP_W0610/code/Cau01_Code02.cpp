#include <iostream>
using namespace std;

class Printer
{
public:
    // Constructor.
    Printer() { cout << "Printer --> Constructor.\n"; }

    // Method.
    void print() { cout << "Printer --> print().\n"; }

    // Destructor.
    virtual ~Printer() { cout << "Printer --> Destructor.\n"; }
};

class Scanner
{
public:
    // Constructor.
    Scanner() { cout << "Scanner --> Constructor.\n"; }

    // Method.
    void scan() { cout << "Scanner --> scan().\n"; }

    // Destructor.
    virtual ~Scanner() { cout << "Scanner --> Destructor.\n"; }
};

class MultiFunctionDevice : public Printer, public Scanner
{
public:
    // Constructor.
    MultiFunctionDevice() : Printer(), Scanner() { cout << "MultiFunctionDevice --> Constructor.\n"; }

    // Method.
    void copy()
    {
        cout << "MultiFunctionDevice --> copy().\n";
        print();
        scan();
    }

    // Destructor.
    ~MultiFunctionDevice() { cout << "MultiFunctionDevice --> Destructor.\n"; }
};

int main()
{
    MultiFunctionDevice mfd;
    mfd.print(); // from class Printer.
    mfd.scan();  // from class Scan.
    mfd.copy();  // from class MultiFunctionDevice.
    return 0;

    // Result:
    // Printer --> Constructor.
    // Scanner --> Constructor.
    // MultiFunctionDevice --> Constructor.
    // Printer --> print().
    // Scanner --> scan().
    // MultiFunctionDevice --> copy().
    // Printer --> print().
    // Scanner --> scan().
    // MultiFunctionDevice --> Destructor.
    // Scanner --> Destructor.
    // Printer --> Destructor.
}