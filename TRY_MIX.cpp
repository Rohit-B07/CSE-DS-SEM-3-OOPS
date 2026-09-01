#include<iostream>
using namespace std;

class university{
    public:
    class student{
        static int rollNo;
        string name;
        public:

        student(string n){
            rollNo++;
            name =n;
        }

        void show(){
            cout << "Student Information"<<endl;
            cout<< "Roll no : "<< rollNo<<endl;
            cout<< "Name : "<< name<<endl;
        }
    };


    void UniversityInfo(){
        cout <<"ABES Engineering College"<<endl;
    }
};

    int university::student::rollNo=2532000;

int main(){
    university::student s("Rohit");
    university u;
    s.show();
    u.UniversityInfo();
    cout << "----------------------"<<endl;
    

    university::student s1("Mohit");

    s1.show();
    u.UniversityInfo();
}