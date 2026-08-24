// #include <iostream>
// using namespace std;

// class BankAccount {
// private:
//     double balance = 0;

// public:
//     void deposit(double amount) {
//         if (amount > 0)
//             balance += amount;
//     }

//     void withdrawl(double withdraw) {
//         if (withdraw > getBalance()) {
//             cout << "Insufficient Balance" << endl;
//         }
//         else {
//             balance = balance - withdraw;
//         }
//     }

//     double getBalance() const {
//         return balance;
//     }
// };

// int main() {
//     BankAccount B;

//     B.deposit(15000);
//     cout << B.getBalance() << endl;

//     B.withdrawl(10000);
//     cout << B.getBalance() << endl;
// }




// #include<iostream>
// using namespace std;

// class Student{
//     public:
//         int marks;
// };

// void display(const Student& s){
//     cout << s.marks;
// }

// int main(){
//     Student st{90};
//     display(st);
// }


//OBJECT RETURN FROM FUNCTIONS

// #include <iostream>
// using namespace std;

// class Point{
//     public:
//     int x , y;

// };

// Point createPoint(int a , int b){
//     return Point{a,b};
// }

// int main(){
//     Point p = createPoint(10,20);
//     cout << p.x << " " << p.y;
// }


// friend function

#include <iostream>
using namespace std;
class Box{
    private:
    int value = 10;
    public:
    friend void show(const Box& b);
};

void show(const Box& b){
    cout << b.value;
}

int main(){
    Box(b);
    show(b);
}