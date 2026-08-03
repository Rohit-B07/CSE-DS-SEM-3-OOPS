#include <iostream>
using namespace std;

class student{
    int rollNo;
    string Name;
    float marks;

    public:

        void setData(){
            cout << "Enter your Roll no : ";
            cin >> rollNo; 

            cin.ignore();
            cout << "Enter your Name : ";
            // cin >> Name;
            getline(cin,Name);


            cout << "Enter your Marks : ";
            cin >> marks; 

            cout << endl;
        }
        

        void getData(){
            cout <<"---- STUDENT RECORD ----"<<endl;

            cout << "Student name is : " << Name << endl;

            cout << "Roll no is : " << rollNo << endl;

            cout << "Marks is : " << marks << endl;
        }
};

int main(){
    student s;

    s.setData();

    s.getData();
}