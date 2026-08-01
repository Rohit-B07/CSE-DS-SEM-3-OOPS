#include <iostream>
using namespace std;

class Employee {
public:
    string Name;
    int ID;
    string Position;
    string Department;

private:
    int salary;

public:
    void get_data() {
        cout << "Enter the Name: ";
        cin >> Name;
        cout << "Enter the ID: ";
        cin >> ID;
        cout << "Enter the Position: ";
        cin >> Position;
        cout << "Enter the Department: ";
        cin >> Department;
        cout << "Enter the Salary: ";
        cin >> salary;
    }

    void show_data() {
        cout << "======= Employee Records =======" << endl;
        cout << "Name is : " << Name << endl;
        cout << "ID is : " << ID << endl;
        cout << "Position is : " << Position << endl;
        cout << "Department is : " << Department << endl;
        cout << "Salary is : " << salary << endl;
    }

    void Gross_salary() {
        double gross_salary = 0;

        if(salary > 5000 && salary <= 10000){
            gross_salary = (2.5/100.0)*salary + (3/100.0)*salary;
        }
        else if (salary > 10000 && salary <= 25000){
            gross_salary = (3/100.0)*salary + (3.5/100.0)*salary;
        }
        else if (salary > 25000 && salary <= 50000){
            gross_salary = (5/100.0)*salary + (7.5/100.0)*salary;
        }
        else if (salary > 50000){
            gross_salary = (7.5/100.0)*salary + (9/100.0)*salary;
        }

        cout << "The Gross Salary is : " << gross_salary << endl;
    }
};

int main() {
    Employee e;
    e.get_data();
    e.show_data();
    e.Gross_salary();
    return 0;
}
