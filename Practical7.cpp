#include <iostream>
using namespace std;

class Person{
protected:
    string name;
    int age;
public:
    void getData()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
};
class Student : public Person{
    int marks;

public:
    void getMarks()
    {
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;
    s.getData();
    s.getMarks();
    s.display();
    return 0;
}