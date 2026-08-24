
#include <iostream>
using namespace std;

class Student{
    int roll , marks;
    string name;

    public: 

    Student(){
        roll = 7;
        name = "Rohit";
        marks= 100;
    }

    Student(int a , string b , int c){
        roll = a;
        name = b;
        marks = c;
    }

    Student(const Student& s){
        roll = s.roll;
        name = s.name;
        marks = s.marks;
    }

    ~Student(){
        cout << "Destructor Called" <<endl;
    };

    void display(){
        cout << "Roll no : " << roll <<endl;
        cout << "Name : " << name <<endl;
        cout << "Marks : " << marks <<endl;
    }

};


int main(){

    cout << "======= Constructor and Destructor ========"<<endl;

    cout<<"----------------------------------" <<endl;

    Student s;
    s.display();
    
    cout<<"----------------------------------" <<endl;

    Student s1(9 ,"Rohit", 97);
    s1.display();

    cout<<"----------------------------------"<<endl;
    Student s2(8 ,"Mohit", 97);


    Student s3(s2);
    s3.display();

    cout<<"----------------------------------"<<endl;

    
}