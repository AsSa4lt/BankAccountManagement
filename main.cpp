#include <iostream>
#include "Bank.cpp"

void printMenu(){
    cout << "1. Create Account" << endl;
    cout << "2. Find account"<< endl;
    cout << "2. Withdraw money"<< endl;
    cout << "3. Deposit money"<< endl;
    cout << "4. Delete account"<< endl;
}

void CreateAccount(Bank *bank){
    cout << "Enter ID: ";
    int id;
    cin >> id;
    cout << "Enter Name: ";
    string name;
    cin >> name;
    cout << "Enter Balance: ";
    double balance;
    cin >> balance;
    BankAccount *b = new BankAccount(id, name, balance);
    bank->addAccount(*b);
    delete b;
}


void FindAccout(Bank *b){
    int a;
    cout << "Enter ID: ";
    cin >> a;
    b->display(a);
}

int main() {
    Bank bank;
    while (true){
        printMenu();
        int action;
        cin >> action;
        if(action == 1){
            CreateAccount(&bank);
        }else if(action == 2){
            FindAccout(&bank);
        }else if (action == 3){
            int number, money;
            cin >> number;
            cin >> money;
            bank.deposit(number, money);
        }else if (action == 4) {
            int number, money;
            cin >> number;
            cin >> money;
            bank.withdraw(number, money);
        }else if(action == 4){
            int number;
            cin >> number;
            bank.deleteAccount(number);
        }
    }
    return 0;
}
