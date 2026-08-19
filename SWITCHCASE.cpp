#include <iostream>
#include <cstdlib>
using namespace std;

class bankaccount {
private:
    string accountholder;
    int accountnumber;
    double balance;

public:
    void createaccount(string name, int accNO, double initialbalance) {
        accountholder = name;
        accountnumber = accNO;
        balance = initialbalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited ";
            cout << "Current balance: " << balance << endl;
        } else {
            cout << "Invalid amount.";
        }
    }

    void withdrawal(double amount) {
        if (amount <= 0) {
            cout << "Invalid amount.";
        }
        else if (amount > balance) {
            cout << "Insufficient balance";
        }
        else {
            balance -= amount;
            cout << "Amount withdrawl ";
            cout << "Current balance: " << balance << endl;
        }
    }

    void display() {
        cout << "--- Bank Account Details ---";
        cout << "Account holder: " << accountholder << endl;
        cout << "Account number: " << accountnumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    int accNO, choice;
    string Accname;
    double balance, amount;

    cout << "Enter account holder name: ";
    cin >> Accname;

    cout << "Enter account number: ";
    cin >> accNO;

    cout << "Enter initial balance: ";
    cin >> balance;

    bankaccount account;
    account.createaccount(Accname, accNO, balance);

    while (true) {
        cout << "bank  menu";
        cout << "1. Display Account";
        cout << "2. Deposit";
        cout << "3. Withdrawl";
        cout << "4. Exit";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            account.display();
            break;

        case 2:
            cout << "Enter amount to deposited: ";
            cin >> amount;
            account.deposit(amount);
            break;

        case 3:
            cout << "Enter amount to withdrawl: ";
            cin >> amount;
            account.withdrawal(amount);
            break;

        case 4:
            cout << "Thank you for using the bank system.";
            exit(0);

        default:
            cout << "Invalid choice";
        }
    }

    return 0;
}