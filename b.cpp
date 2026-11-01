
#include <iostream>
using namespace std;

// Base Class
class A
{
public:
    void display()
    {
        cout << "Base class A" << endl;
    }
};

// Derived Class B
class B : public A
{
public:
    void show()
    {
        cout << "Derived class B" << endl;
    }
};

// Derived Class C
class C : public B
{
public:
    void print()
    {
        cout << "Derived class C" << endl;
    }
};

int main()
{
    C obj;

    obj.display();
    obj.show();
    obj.print();

    return 0;
}
