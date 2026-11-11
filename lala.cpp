#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    // Default Constructor
    Person() {
        name = "Unknown";
        age = 0;
        cout << "Person Default Constructor" << endl;
    }

    // Parameterized Constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Person Parameterized Constructor" << endl;
    }

    // Copy Constructor
    Person(const Person &p) {
        name = p.name;
        age = p.age;
        cout << "Person Copy Constructor" << endl;
    }

    // Destructor
    ~Person() {
        cout << "Person Destructor" << endl;
    }
};

class Student : public Person {
private:
    int roll;
    double marks;

public:
    // Default Constructor
    Student() : Person() {
        roll = 0;
        marks = 0;
        cout << "Student Default Constructor" << endl;
    }

    // Constructor Overloading 1
    Student(string n, int r) : Person(n, 0) {
        roll = r;
        marks = 0;
        cout << "Student Constructor 1" << endl;
    }

    // Constructor Overloading 2
    Student(string n, int a, int r, double m)
        : Person(n, a) {
        roll = r;
        marks = m;
        cout << "Student Constructor 2" << endl;
    }

    // Copy Constructor
    Student(const Student &s) : Person(s) {
        roll = s.roll;
        marks = s.marks;
        cout << "Student Copy Constructor" << endl;
    }

    // Update Marks
    void updateMarks(double m) {
        marks = m;
    }

    // Display Function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }

    // Destructor
    ~Student() {
        cout << "Student Destructor" << endl;
    }
};

int main() {

    cout << "--- Creating Student 1 ---" << endl;

    Student s1("Rahim", 21, 101, 85);

    cout << "\n--- Copying Student 1 ---" << endl;

    Student s2(s1);

    cout << "\n--- Updating Copied Student ---" << endl;

    s2.updateMarks(95);

    cout << "\n--- Original Student ---" << endl;
    s1.display();

    cout << "\n--- Copied Student ---" << endl;
    s2.display();

    cout << "\n--- Creating Default Student ---" << endl;

    Student s3;

    cout << "\n--- End of Main ---" << endl;

    return 0;
}
