// #include<iostream>
// using namespace std;

// class Student{
//     public:
//     int rollNo;
//     string name;
//     void display(){
//         cout << "Roll No : "<<rollNo<<endl;
//         cout << "Name : " << name <<endl;

//     }
// };

// int main (){
// Student s;
// s.name="Rohit";
// s.rollNo = 8;

// Student *ptr=&s;
// ptr -> display();

// Student *ptr = &s;
// ptr->rollNo=8;
// ptr->name="Rohit";
// ptr->display();

// }

// #include <iostream>
// using namespace std;
// class Employee{
//     public:
//     int id;
//     string name;
//     void display(){
//         cout<<"ID :"<<id<<endl;
//         cout<<"NAME: "<<name<<endl;
//        }

// };

// int main(){
//     Employee *emp = new Employee;
//     emp->id = 101;
//     emp->name= "ROHIT";

//     emp->display();
//     delete emp;
//     emp->display();
// }

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
    int i ;
    cin >> i;

    Student *students = new Student[i];

    for (int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        students[i].input();
    }

    cout << "\nStudent Details" << endl;
    cout << "========================" << endl;

    for (int i = 0; i < 3; i++)
    {
        students[i].display();
    }

    return 0;
}