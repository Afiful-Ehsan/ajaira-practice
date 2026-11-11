#include <iostream>
using namespace std;

class Student
{
public:

    int id;
};

int main()
{
    Student s1;

    s1.id = 101;

    cout << "Student ID: " << s1.id << endl;

    return 0;
}
