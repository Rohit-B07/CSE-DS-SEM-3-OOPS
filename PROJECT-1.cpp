#include<iostream>
using namespace std;

class Bank{
    private :
        class Account {
        int AccNo;
        double Bal;
        public:
        Account(){
            AccNo=0;
            Bal=0;
        }

        Account(int num , double amount){
            AccNo = num;
            Bal = amount;
        }

        void deposit(double amount) {
            if (amount > 0) {
                Bal += amount;
                cout << "Amount deposited ";
                cout << "Current balance: " << Bal << endl;
            } else {
                cout << "Invalid amount.";
            }
        }

        void withdrawal(double amount) {
            if (amount <= 0) {
                cout << "Invalid amount.";
            }
            else if (amount > Bal) {
                cout << "Insufficient balance";
            }
            else {
                Bal -= amount;
                cout << "Amount withdrawl ";
                cout << "Current balance: " << Bal << endl;
            }
        }

        void showAcc(){
            cout << "\nAccount No : " << AccNo<<endl;
            cout << "\nBalance : " << Bal <<endl;
        }

        int getAccNo(){
            return AccNo;
        }

    };

    public:
        Account a[5];

        void CreateAcc(){
            a[0]=Account(101,50000);
            a[1]=Account(102,60000);
            a[2]=Account(103,70000);
            a[3]=Account(104,80000);
            a[4]=Account(105,90000);
        }

        int findAcc(int num){
            for(int i =0 ; i <5;i++){
                if(a[i].getAccNo() == num){
                    return i;
                }
            }
            return -1;
        }

        void showAllAcc(){
            cout << "\n ====== All Accounts =======\n";

            for(int i =0 ; i<5 ; i++){
                a[i].showAcc();
            }
        }

        void depositAllMoney(){
            int num;
            double amount;

            cout << "\nEnter Account No:"<<endl;
            cin >> num;

            int index = findAcc(num);
            if(index != -1){
                cout << "Enter Deposit Amount : ";
                cin >> amount;

                a[index].deposit(amount);
            }else{
                cout << "Account not found! \n";
            }

        }


        void withdrawAllMoney(){
            int num ;
            double amount;

            cout << "\nEnter Account No:"<<endl;
            cin >> num;

            int index = findAcc(num);
            if(index != -1){
                cout << "Enter Withdrawl Amount : ";
                cin >> amount;

                a[index].withdrawal(amount);
            }else{
                cout << "Account not found! \n";
            }
        }

        void ShowParticularAcc(){
            int num;
            
            cout << "\nEnter Account No:"<<endl;
            cin >> num;

            int index = findAcc(num);
            if(index != -1){

                a[index].showAcc();
            }else{
                cout << "Account not found! \n";
            }
        }


};

int main(){
     Bank b;
    b.CreateAcc();

    int choice;

    do {
        cout << "\n====== BANK MANAGEMENT SYSTEM ======\n";
        cout << "1. Show All Accounts\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Show Particular Account\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                b.showAllAcc();
                break;

            case 2:
                b.depositAllMoney();
                break;

            case 3:
                b.withdrawAllMoney();
                break;

            case 4:
                b.ShowParticularAcc();
                break;

            case 5:
                cout << "Thank you for using the Bank Management System!\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);


}