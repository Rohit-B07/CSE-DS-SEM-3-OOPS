#include<iostream>
using namespace std;

class BankAccount{
    private:
    int balance;
    int AccountNumber;

    public:
    
    BankAccount(int AccNo , int bal){
        AccountNumber = AccNo;
        balance = bal;
    }

    void Deposit(int input){
        balance += input;
        cout << "Amount " << input << " Added Successfully" << endl;
    }

    void Withdrawl(int amount){
        balance -= amount;

        if(balance < 0){
            cout << "Insufficient Balance"<<endl;
        }
        else{
            balance -= amount;
            cout << "Withdrawl Successfull"<<endl;
        }
    }

    void DisplayBalance(){
        cout << "Current Balance is : " << balance << endl;
    }
};

int main(){
    int AccNo , Balance , Deposit , withdraw;

    cout << "Enter Acc No: ";
    cin >> AccNo;
    cout << "Enter Balance: ";
    cin >> Balance;


    BankAccount BankAccount1(AccNo,Balance);

    cout << "Amount to Deposit";
    cin >> Deposit;

    BankAccount1.Deposit(Deposit);

    cout << "Amount to Withdraw";
    cin >> withdraw;
    
    BankAccount1.Withdrawl(withdraw);

    BankAccount1.DisplayBalance();

    
    

}