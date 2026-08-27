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

// #include <iostream>
// using namespace std;
// class Employee{
//     long long salary;
//     public:
//     string name;

//     Employee(string s, int n){
//         name = s;
//         salary = n;
//     }

//     friend void display(Employee e);
// };

// void display(Employee e){
//     cout << "Name : "<<e.name<<endl;
//     cout << "Salary : "<<e.salary<<endl;
// }

// int main(){
//     Employee e("Rohit" , 800000000);
//     display(e);
// }


// FRIEND FUNCTION WITH TWO DIFF CLASS

// #include <iostream>
// using namespace std;

// class B;
// class A{
//     int x;

//     public:
//     A(){
//         x=10;
//     }

//     friend void add(A,B);
// };

// class B{
//     int y;

//     public:
//     B(){
//         y=20;
//     }

//     friend void add(A,B);
// };

// void add (A a,B b){
//     cout << a.x + b.y;
// }

// int main(){
//     A a;
//     B b;
//     add(a,b);
// }


//FRIEND FUNCTION FOR ADDITION OF TWO OBJECTS;

#include <iostream>
using namespace std;

class Number{
    int value;
    public:
    Number(int v){
        value = v;
    }

    friend Number add(Number n1 , Number n2);
    void display(){
        cout << "Value : " << value<<endl;
    }
};

Number add (Number n1 , Number n2){
    Number result(n1.value+n2.value);

    return result;
}

int main(){
    Number n1(6);
    Number n2(8);

    Number n3 = add(n1,n2);

    n3.display();

}


/*
/Feature                                        / Member Function   / Friend Function                                           /
/-----------------------------------------------/-------------------/--------------------------------------------------------   /
/CLASS MEMBER?                                  / YES               /   No                                                      /
/Can access private data?                       / YES               /   YES                                                     /
/Can access protected data?                     / YES               /   YES                                                     /
/Has 'this' pointer?                            / YES               /   NO                                                      /
/Called using object?                           / Usually Yes       /   NO                                                      /
/Declared using 'friend'?                       / NO                /   YES                                                     /
/Can access private data of multiple classes?   / NORMALLY NO       /   YES , IF FRIEND OF BOTH                                 /
/common use                                     /Class operation    /   OPERATOR OVERLOADING , COOPERATION BETWEEN CLASSES      /
*/