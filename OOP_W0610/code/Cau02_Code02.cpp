#include <iostream>
#include <string>
using namespace std;

// Class template.
template <typename T1, typename T2>
class MyPair
{
private:
    T1 first;
    T2 second;

public:
    MyPair(T1 first, T2 second) : first(first), second(second) {}

    void show() const { cout << "(" << first << ", " << second << ")\n"; }
};

int main()
{
    // Use class MyPair<T1, T2> for <string, string>.
    MyPair<string, string> student("Van Thanh Phat", "25CTT4");
    student.show();

    // Use class MyPair<T1, T2> for <string, double>.
    MyPair<string, double> product("Laptop Lenovo", 25.5);
    product.show();

    return 0;

    // Result:
    // (Van Thanh Phat, 25CTT4)
    // (Laptop Lenovo, 25.5)
}