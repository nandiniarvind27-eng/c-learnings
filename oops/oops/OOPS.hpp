#ifndef OOPS_hpp
#define OOPS_hpp

#include <string>
using namespace std;

// ----------------------
//     Account Class
// ----------------------
class Account
{
private:
    int acc_no;
    string acc_holder_name;
    //string address;
    int balance;
    int pin;

public:
    Account()
    {
        acc_no = 0;
        acc_holder_name = "";
       // address = "";
        pin = 0;
        balance = 0;
        
    }

    // ---- Setters (used when creating new account) ----
    void setDetails(int accNo, string name,int pinCode, int initialBalance);

    // ---- Account Operations ----
    void deposit(int amount);
    void withdraw(int amount);
    int getBalance() const;
    bool verifyPin(int enteredPin) const;

    // ---- Getter ----
    int getAccNo() const;
};



// ----------------------
//        Bank Class
// ----------------------
class Bank
{
private:
    Account* members;     // array of 20 accounts
    int count;            // how many accounts stored now

public:
    Bank()
    {
        members = new Account[20];
        count = 0;
    }
    
 //   Account* m1;

    // ---- Core Bank Operations ----
    void addAccount();            // take user input → create account
    int searchAccount(int accNo); // returns index or -1
    void depositMoney(int amount);
    void withdrawMoney(int amount);
    void showBalance(int accNo);
};

#endif

