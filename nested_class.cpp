// #include <iostream>
// using namespace std;

// class outer{
//     public:
//     class inner{
//         public:
//         void display(){
//             cout << "This is a inner class"<<endl;
//         }

//     };
// };

// int main(){
//     outer::inner obj;
//     obj.display();
// }


// #include<iostream>
// using namespace std;

// class university{
//     public:
//     class student{
//         int rollNo;
//         string name;
//         public:

//         student(int r,string n){
//             name =n;
//             rollNo = r;
//         }

//         void show(){
//             cout << "Student Information"<<endl;
//             cout<< "Roll no : "<< rollNo<<endl;
//             cout<< "Name : "<< name<<endl;
//         }
//     };
//     void UniversityInfo(){
//         cout <<"ABES Engineering College"<<endl;
//     }
// };

// int main(){
//     university::student s(1,"Rohit");
//     university::student s1(2,"Mohit");
//     s.show();
//     university u;
//     u.UniversityInfo();

//     s1.show();
//     u.UniversityInfo();
// }


#include <iostream>
using namespace std;
class Bank{
    public:
    //nested class
    class Account{
        private:
        int accountNumber;
        double balance;
        public:
        Account(int number,double amount){
            accountNumber=number;
            balance=amount;

        }
        void showAccount(){
            cout<<"Account number : "<<accountNumber<<endl;
            cout<<"Balance : " <<balance<<endl;
        }
    };
    public:
    // public function to access private account class
    void createAccount(){
        Account customer1(101,50000);
        customer1.showAccount();
    }

};
int main(){
    // Bank::Account a(121,70000);
    // a.showAccount();
    Bank b;
    b.createAccount();
}