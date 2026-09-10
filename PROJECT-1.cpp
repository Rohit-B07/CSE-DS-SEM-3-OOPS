// #include<iostream>
// using namespace std;

// class Bank{
//     private :
//         class Account {
//         int AccNo;
//         double Bal;
//         public:
//         Account(){
//             AccNo=0;
//             Bal=0;
//         }

//         Account(int num , double amount){
//             AccNo = num;
//             Bal = amount;
//         }

//         void deposit(double amount) {
//             if (amount > 0) {
//                 Bal += amount;
//                 cout << "Amount deposited ";
//                 cout << "Current balance: " << Bal << endl;
//             } else {
//                 cout << "Invalid amount.";
//             }
//         }

//         void withdrawal(double amount) {
//             if (amount <= 0) {
//                 cout << "Invalid amount.";
//             }
//             else if (amount > Bal) {
//                 cout << "Insufficient balance";
//             }
//             else {
//                 Bal -= amount;
//                 cout << "Amount withdrawl ";
//                 cout << "Current balance: " << Bal << endl;
//             }
//         }

//         void showAcc(){
//             cout << "\nAccount No : " << AccNo<<endl;
//             cout << "\nBalance : " << Bal <<endl;
//         }

//         int getAccNo(){
//             return AccNo;
//         }

//     };

//     public:
//         Account a[5];

//         void CreateAcc(){
//             a[0]=Account(101,50000);
//             a[1]=Account(102,60000);
//             a[2]=Account(103,70000);
//             a[3]=Account(104,80000);
//             a[4]=Account(105,90000);
//         }

//         int findAcc(int num){
//             for(int i =0 ; i <5;i++){
//                 if(a[i].getAccNo() == num){
//                     return i;
//                 }
//             }
//             return -1;
//         }

//         void showAllAcc(){
//             cout << "\n ====== All Accounts =======\n";

//             for(int i =0 ; i<5 ; i++){
//                 a[i].showAcc();
//             }
//         }

//         void depositAllMoney(){
//             int num;
//             double amount;

//             cout << "\nEnter Account No:"<<endl;
//             cin >> num;

//             int index = findAcc(num);
//             if(index != -1){
//                 cout << "Enter Deposit Amount : ";
//                 cin >> amount;

//                 a[index].deposit(amount);
//             }else{
//                 cout << "Account not found! \n";
//             }

//         }


//         void withdrawAllMoney(){
//             int num ;
//             double amount;

//             cout << "\nEnter Account No:"<<endl;
//             cin >> num;

//             int index = findAcc(num);
//             if(index != -1){
//                 cout << "Enter Withdrawl Amount : ";
//                 cin >> amount;

//                 a[index].withdrawal(amount);
//             }else{
//                 cout << "Account not found! \n";
//             }
//         }

//         void ShowParticularAcc(){
//             int num;
            
//             cout << "\nEnter Account No:"<<endl;
//             cin >> num;

//             int index = findAcc(num);
//             if(index != -1){

//                 a[index].showAcc();
//             }else{
//                 cout << "Account not found! \n";
//             }
//         }


// };

// int main(){
//      Bank b;
//     b.CreateAcc();

//     int choice;

//     do {
//         cout << "\n====== BANK MANAGEMENT SYSTEM ======\n";
//         cout << "1. Show All Accounts\n";
//         cout << "2. Deposit Money\n";
//         cout << "3. Withdraw Money\n";
//         cout << "4. Show Particular Account\n";
//         cout << "5. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 b.showAllAcc();
//                 break;

//             case 2:
//                 b.depositAllMoney();
//                 break;

//             case 3:
//                 b.withdrawAllMoney();
//                 break;

//             case 4:
//                 b.ShowParticularAcc();
//                 break;

//             case 5:
//                 cout << "Thank you for using the Bank Management System!\n";
//                 break;

//             default:
//                 cout << "Invalid choice! Please try again.\n";
//         }

//     } while (choice != 5);


// }



#include<iostream>
using namespace std;

class Bank{
    private:

        class Account {
            static int AccNo;
            double Bal;
            int accountNo;

        public:

            Account(){
                accountNo = 0;
                Bal = 0;
            }

            Account(double amount){
                accountNo = ++AccNo;
                Bal = amount;
            }

            void deposit(double amount) {
                if (amount > 0) {
                    Bal += amount;
                    cout << "Amount deposited ";
                    cout << "Current balance: " << Bal << endl;
                }
                else {
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
                    cout << "Amount withdrawal ";
                    cout << "Current balance: " << Bal << endl;
                }
            }

            void showAcc(){
                cout << "\nAccount No : " << accountNo << endl;
                cout << "Balance : " << Bal << endl;
            }

            int getAccNo(){
                return accountNo;
            }
        };

        Account a[5];
        int totalAccounts = 0;

    public:

        void CreateAcc(){

            if(totalAccounts >= 5){
                cout << "\nMaximum 5 accounts can be created!\n";
                return;
            }

            double amount;

            cout << "\nEnter Initial Account Balance : ";
            cin >> amount;

            if(amount < 0){
                cout << "Invalid balance!\n";
                return;
            }

            a[totalAccounts] = Account(amount);

            cout << "\nAccount Created Successfully!\n";
            a[totalAccounts].showAcc();

            totalAccounts++;
        }

        int findAcc(int num){

            for(int i = 0; i < totalAccounts; i++){
                if(a[i].getAccNo() == num){
                    return i;
                }
            }

            return -1;
        }

        void showAllAcc(){

            cout << "\n====== All Accounts =======\n";

            if(totalAccounts == 0){
                cout << "No accounts created yet.\n";
                return;
            }

            for(int i = 0; i < totalAccounts; i++){
                a[i].showAcc();
            }
        }

        void depositAllMoney(){

            int num;
            double amount;

            cout << "\nEnter Account No: ";
            cin >> num;

            int index = findAcc(num);

            if(index != -1){

                cout << "Enter Deposit Amount : ";
                cin >> amount;

                a[index].deposit(amount);
            }
            else{
                cout << "Account not found!\n";
            }
        }

        void withdrawAllMoney(){

            int num;
            double amount;

            cout << "\nEnter Account No: ";
            cin >> num;

            int index = findAcc(num);

            if(index != -1){

                cout << "Enter Withdrawal Amount : ";
                cin >> amount;

                a[index].withdrawal(amount);
            }
            else{
                cout << "Account not found!\n";
            }
        }

        void ShowParticularAcc(){

            int num;

            cout << "\nEnter Account No: ";
            cin >> num;

            int index = findAcc(num);

            if(index != -1){
                a[index].showAcc();
            }
            else{
                cout << "Account not found!\n";
            }
        }
};

int Bank::Account::AccNo = 0;

int main(){

    Bank b;
    int choice;

    do {

        cout << "\n====== BANK MANAGEMENT SYSTEM ======\n";
        cout << "1. Create Account\n";
        cout << "2. Show All Accounts\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Show Particular Account\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                b.CreateAcc();
                break;

            case 2:
                b.showAllAcc();
                break;

            case 3:
                b.depositAllMoney();
                break;

            case 4:
                b.withdrawAllMoney();
                break;

            case 5:
                b.ShowParticularAcc();
                break;

            case 6:
                cout << "Thank you for using the Bank Management System!\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}