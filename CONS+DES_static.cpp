// #include <iostream>
// using namespace std;

// class Employee{
//     static int aliveCount;

//     public:
//         Employee(){
//             aliveCount++;
//             cout << "Employee Created . Currently alive : "<<aliveCount<<endl;
//         }
//         ~Employee(){
//             aliveCount--;
//             cout << "Employee Destroyed . Currently alive : "<<aliveCount<<endl;
//         }
// };
// int Employee::aliveCount = 0;

// int main(){
//     Employee e1;
//     {
//         Employee e2;
//         Employee e3;
//     }

//     cout << "Back in main ()" <<endl;
// }

#include <iostream>
using namespace std;

class Students{
    static int rollNo;
    public:
        int marks;
        string name;
        

        Students(int m , string n){
            rollNo++;
            marks = m;
            name = n;
        }

        void show(){
            cout << "RollNo : " <<rollNo <<endl;
            cout << "Name : " <<name <<endl;
            cout << "Marks : " <<marks <<endl;
        }
};
int Students::rollNo=2532000;

int main(){
    Students s1(88,"Rohit");

    Students s2(78,"Sonu");
  
    Students s3(98,"Shahil");
    s1.show();
    s2.show();
    s3.show();
}


