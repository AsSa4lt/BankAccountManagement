//
// Created by Rostyslav on 27.02.2023.
//
#include "iostream"
using namespace std;

class BankAccount{
private:
    int accountNumber;
    string accountHolderName;
    double balance;
public:
    BankAccount(int _accountNumber, string _accountHolderName, double _balance){
        accountNumber = _accountNumber;
        accountHolderName = _accountHolderName;
        balance = _balance;
    }
    void deposit(double money){
        balance += money;
    }
    void withdraw(double money){
        if(balance < money){
            cout<<"Not enough money";
        }else{
            balance -= money;
        }
    }
    int getAccountNumber(){
        return accountNumber;
    }
    string getName(){
        return accountHolderName;
    }

    double getBalance(){
        return balance;
    }
};