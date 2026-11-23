#include <iostream>
using namespace std;

// 01. Component: Common interface for all components in the expression.
class Expression
{
public:
    virtual ~Expression() {}
    virtual double evaluate() const = 0;
    virtual void print() const = 0;
};

// 02. Leaf: A specific number (has no child branches).
class Number : public Expression
{
private:
    double value;

public:
    Number(double val) : value(val) {}

    double evaluate() const override { return value; }

    void print() const override { cout << value; }
};

// 03. Composite: Addition operation (contains 02 child expressions on the left and right).
class Add : public Expression
{
private:
    Expression *left;
    Expression *right;

public:
    Add(Expression *l, Expression *r) : left(l), right(r) {}

    // Recursively free the child branches when the object is destroyed.
    ~Add() override
    {
        delete left;
        delete right;
    }

    double evaluate() const override { return left->evaluate() + right->evaluate(); }

    void print() const override
    {
        cout << "(";
        left->print();
        cout << " + ";
        right->print();
        cout << ")";
    }
};

// 03. Composite: Multiplication operation (contains 02 child expressions on the left and right).
class Multiply : public Expression
{
private:
    Expression *left;
    Expression *right;

public:
    Multiply(Expression *l, Expression *r) : left(l), right(r) {}

    // Recursively free the child branches when the object is destroyed.
    ~Multiply() override
    {
        delete left;
        delete right;
    }

    double evaluate() const override { return left->evaluate() * right->evaluate(); }

    void print() const override
    {
        cout << "(";
        left->print();
        cout << " * ";
        right->print();
        cout << ")";
    }
};

int main()
{
    // Build the expression tree: (2 + 6) * 9.
    Expression *two = new Number(2);
    Expression *six = new Number(6);
    Expression *nine = new Number(9);

    // Child branch: (2 + 6).
    Expression *addition = new Add(two, six);

    // Root of the tree: (2 + 6) * 9
    Expression *root = new Multiply(addition, nine);

    // And we just need to call methods on the root.
    cout << "Bieu thuc: ";
    root->print();
    cout << " = " << root->evaluate() << endl;

    // Just delete the root node; the virtual destructor will automatically clean up the entire tree.
    delete root;

    return 0;

    // Result:
    // Bieu thuc: ((2 + 6) * 9) = 72
}