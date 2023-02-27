//
// Created by Rostyslav on 27.02.2023.
//

#include "vector"
#include "BankAccount.cpp"
using namespace std;

class Bank{
private:
    vector<BankAccount> list_accounts;
public:
    void addAccount(BankAccount _account){
        list_accounts.push_back(_account);
    }
    void deleteAccount(int _account){
        int id = findAccount(_account);
        if(id == -1){
            cout << "Account does not exist";
        } else{
            list_accounts.erase(list_accounts.begin() + id);
            cout<<"Account deleted successfully";
        }
    }

    void deposit(int _accountNumber, double money){
        int id = findAccount(_accountNumber);
        if(id == -1){
            cout << "Account does not exist";
        } else{
            list_accounts[id].deposit(money);
            cout<<"Money deposited successfully";
        }
    }

    void withdraw(int _accountNumber, double money){
        int id = findAccount(_accountNumber);
        if(id == -1){
            cout << "Account does not exist";
        } else{
            list_accounts[id].withdraw(money);
            cout<<"Money withdrawed successfully";
        }
    }

    BankAccount getAccount(int _accountNumber){
        return list_accounts[findAccount(_accountNumber)];
    }


    int findAccount(int _accountNumber){
        int id = -1;
        for(int i = 0; i < list_accounts.size(); i ++){
            if(list_accounts[i].getAccountNumber() == _accountNumber){
                return i;
            }
        }
        return id;
    }

    void display(int _accountNumber){
        int id = findAccount(_accountNumber);
        if(id == -1){
            cout << "Account does not exist";
        }else {
            cout << "ID:" << list_accounts[id].getAccountNumber() << endl;
            cout << "Holder name: " << list_accounts[id].getName() << endl;
            cout << "Balance: " << list_accounts[id].getBalance() << endl;
        }
    }
};