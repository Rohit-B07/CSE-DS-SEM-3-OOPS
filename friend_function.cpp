//FRIEND FUNC WITHOUT ARGUMENT

// #include <iostream>
// using namespace std;

// class Student{
//     int marks;
//     public:
//     Student(){
//         marks = 90;
//     }

//     friend void display(Student s);
// };

// void display(Student s){
//     cout << "Marks : " << s.marks << endl;
// }

// int main(){
//     Student s;
//     display(s);
// }

// FRIEND FUNC WITH ARGUMENT

// #include <iostream>
// using namespace std;

// class Student{
//     int marks;

//     public:
//     Student(int m ){
//         marks = m;
//     }

//     friend void compare(Student s1 , Student s2);
// };

// void compare(Student s1 , Student s2){
//     if(s1.marks > s2.marks){
//         cout << "Student 1 scored more"<<endl;
//     }
//     else if(s1.marks < s2.marks){
//         cout << "Student 2 scored more"<<endl;
//     }
//     else{
//         cout << "Both Scored equal marks" << endl;
//     }
// }


// int main(){
//     Student s1(90);
//     Student s2(86);

//     compare(s1,s2);
// }

//FRIEND FUNC ACCESSING BOTH PRIVATE AND PUBLIC ELEMENT

#include <iostream>
using namespace std;
class Employee{
    long long salary;
    public:
    string name;

    Employee(string s, int n){
        name = s;
        salary = n;
    }

    friend void display(Employee e);
};

void display(Employee e){
    cout << "Name : "<<e.name<<endl;
    cout << "Salary : "<<e.salary<<endl;
}

int main(){
    Employee e("Rohit" , 800000000);
    display(e);
}