#include <iostream>
using namespace std;
class bankaccount{
    private:
    string accountholder;
    int accountnumber;
    double balance;
    public:
    void createaccount(string name, int accNO, double initialbalance){
        accountholder=name;
        accountnumber=accNO;
        balance=initialbalance;
    }

    void deposit(double amount){
        if(amount>0){
            balance +=amount;
            cout<<"amount deposit";
            cout<<"current balance"<<balance<<endl;
        }
        else{
            cout<<"invalid amount"<<endl;
        }
    }

    void withdrwal(double amount){
        if(amount<=0){
            cout<<"inavalid amount"<<endl;;
        }
        else if(amount > balance){
            cout<<"insufficient balance"<<endl;
        }
        else{
            balance -=amount;
            cout<<"amount withdrwal" <<endl;
            cout<<"current balance:" << balance <<endl;

        }

    }
    void display(){
        cout << "\n--- Bank account details ---\n" << endl;
         cout << "Account holder: " << accountholder << endl;
        cout << "Blance: " << balance << endl;

    }
};
int main(){
int AccNo;
string AccName;
double Bal , depo , withdraw;
cout << "Enter Acc Holder Name: ";
cin >> AccName;
cout << "Enter Acc No: ";
cin >> AccNo;
cout << "Enter Balance: ";
cin >> Bal;


 bankaccount account;

 account. createaccount(AccName,AccNo,Bal);
 account.display();

cout << "Enter the amont to be deposited : ";
cin >> depo;

 account.deposit(depo);

cout << "Enter the amont to be Withdraw : ";
cin >> withdraw;
 account.withdrwal(withdraw);

 return 0;

}