//
//  main.cpp
//  exceptionhandling
//
//  Created by Nandini on 28/11/25.
//

#include <iostream>
using namespace std;
void Findeven(int number[10])
{
    bool flag = false;
 
    cout<<"Enter the 10 numbers:"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>number[i];
    }
    for(int i=0; i<10;i++)
    {
        if(number[i]%2==0)
        {
            cout<<"first even no found: "<<number[i]<<endl;
            flag = true;
            break;
        }

        else
        {// do nothing
        }
    }
    if(!flag)
    {
        cout<<"no even numbers found"<<endl;
    }
    else
    {
        //do nothing
    }
}

void checkpasscode(string password)
{
    int count =0;
    string pwd;
    do
    {
        
        cout<<"Enter your password:"<<endl;
        cin>>pwd;
        count++;
        if(pwd == password)
        {
            cout<<"access granted"<<endl;
            break;
        }
        else if(count >5)
        {
            cout<<"too many attempts"<<endl;
            break;
        }
    }while(password != pwd);
    
}
enum class signal
{
    red =1,
    yellow=2,
    green=3,
    exit =4
};
void Trafficsignal()
{
    //enum class signal s;
    int choice = 0;
    while(choice != static_cast<int>(signal::exit))
    {
        cout<<"Enter the signal:1 red  2 yellow  3 green 4 exit"<<endl;
        cin>>choice;
        enum signal s = static_cast<enum signal>(choice);
        switch(s)
        {
            case signal::red :
                cout<<"stop the car"<<endl;
                break;
            case signal::yellow:
                cout<<"going to stop the car"<<endl;
                break;
            case signal::green:
                    cout<<"go"<<endl;
                break;
            case signal::exit:
                cout<<"exiting"<<endl;
                break;
            default:
                cout<<"invalid choice"<<endl;
        }
        
    }
}
int main(int argc, const char * argv[])
{
    int num[10];
    //Findeven(num);
    string passcode ="pass123";
    //checkpasscode(passcode);
    Trafficsignal();
    
    
}
