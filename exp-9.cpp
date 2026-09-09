//  DESIGN A PROGRAM USING POINTERS TO OBJECTS AND ARRAY OF OF OBJECTS TO MANAGE DYNAMIC DATA STRUCTURE

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    void input()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    int n ;
    cin >> n;

    Student *students = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        students[i].input();
    }

    cout << "\nStudent Details" << endl;
    cout << "========================" << endl;

    for (int i = 0; i < n; i++)
    {
        students[i].display();
    }

    return 0;
}