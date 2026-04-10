#include <iostream>
using namespace std;
// Base class
class Base
{
public:
    virtual void show()
    { // virtual function
        cout << "This is Base class show function" << endl;
    }
};
// Derived class
class Derived : public Base
{
public:
    void show()
    { // overriding virtual function
        cout << "This is Derived class show function" << endl;
    }
};
int main()
{
    Base *bptr;   // base class pointer
    Derived d;    // derived class object
    bptr = &d;    // base pointer pointing to derived object
    bptr->show(); // calls Derived's show() due to virtual function
    return 0;
}