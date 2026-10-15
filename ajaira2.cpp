#include <iostream>
using namespace std;

class Employee
{
private:
    int employeeID;
    double *salary;

public:

    Employee(int id, double s)
    {
        employeeID = id;

        salary = new double;
        *salary = s;

        cout << "Employee created: "
             << employeeID << endl;
    }

    void increaseSalary(double amount)
    {
        *salary = *salary + amount;
    }

    void display()
    {
        cout << "Employee ID: "
             << employeeID << endl;

        cout << "Salary: "
             << *salary << endl;
    }

    ~Employee()
    {
        delete salary;

        cout << "Memory released for Employee "
             << employeeID << endl;
    }
};

int main()
{
    Employee e1(101, 30000);
    Employee e2(102, 40000);

    e1.increaseSalary(5000);

    e1.display();
    
    e2.display();
   

    return 0;
}