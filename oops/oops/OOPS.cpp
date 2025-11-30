//
//  OOPS.cpp
//  oops
//
//  Created by Nandini on 22/11/25.
//

#include "OOPS.hpp"
using namespace std;
#include <iostream>

//this func is for setting the account details
void Account::setDetails(int accNo, string name,int pinCode, int initialBalance)
{
    acc_no = accNo;
    acc_holder_name = name;
   pin = pinCode;
    balance = initialBalance;
    
}


//✔ The Account object already has:
//acc_no
//acc_holder_name
//pin
//balance
//These are stored inside that object.
//So the function does NOT need acc_no because the object already knows its own acc number.
void Account::deposit(int amount)
{
    balance += amount;
    cout<<"current balance is:"<<endl<<balance<<endl;
}
//
void Account::withdraw(int amount)
{
    if(balance>amount)
    {
        balance -= amount;
        cout<<"current balance is:"<<endl<<balance<<endl;
    }
    else
    {
        cout<<"insufficient fund"<<endl;
    }
}
int Account::getBalance() const
{
    cout<<"your current balance is:"<<balance<<endl;
    return balance;
    //cout<<"your current balance is:"<<balance<<endl;
}
bool Account::verifyPin(int enteredPin) const
{
    bool b_pin = false;
    if(pin == enteredPin)
    {
        b_pin = true;
    }
    return b_pin;
}
int Account::getAccNo() const
{
    return acc_no;
}

void Bank::addAccount()
{
    int no;
    string name;
    int pin;
    int amount;
    cout<<"Enter the account no:"<<endl;
    cin>>no;
    cout<<"Enter the name:"<<endl;
    cin>>name;
    cout<<"Enter the pin:"<<endl;
    cin>>pin;
    cout<<"Enter the amount need to deposit:"<<endl;
    cin>>amount;
    members[count].setDetails(no, name,pin,amount);
    count++;
}
void Bank::depositMoney(int acc_no,int amount)
{
   
    
}



