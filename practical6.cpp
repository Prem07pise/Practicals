#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;
public:
    // Parameterized Constructor
    Student(int r, string n)
    {
        roll = r;
        name = n;
    }
    // Copy Constructor
    Student(const Student &s)
    {
        roll = s.roll;
        name = s.name;
    }
    // Display function
    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    // First object
    Student s1(101, "Rahul");
    // Second object copying data of s1
    Student s2 = s1;
    cout << "Data of First Object:" << endl;
    s1.display();
    cout << "\nData of Second Object (Copied using Copy Constructor):" << endl;
    s2.display();
    return 0;
}