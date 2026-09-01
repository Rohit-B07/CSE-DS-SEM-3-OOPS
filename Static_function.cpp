#include <iostream>
using namespace std;

class Students{
    public:
    static int totalstudents;

    Students(){
        totalstudents ++;
    }
};

class Student{
    public:
    static int totalstudent;
    static void showCount(){
        cout << "Count : " << totalstudent <<endl;
    }
};
int Student::totalstudent = 0;
int Students::totalstudents = 0;

int main(){
    Students s1 , s2 , s3 /*, s4 , s5*/;
    cout << "Total Students : "<<Students::totalstudents<<endl;

    Student s6;

    Student::showCount();
}