//
//  main.cpp
//  Exercises
//
//  Created by Nandini on 18/11/25.
//
#include<iostream>
#include<string.h>
using namespace std;


int string_size(string name)
{
    int result=0;
    //int size = sizeof name/sizeof name[0];
    
    for(int i=0;name[i]!='\0';i++)
    {
        result++;
    }
    return result;
    
}
void secondlargest (int arr[5])
{
    int firstlargest = arr[0];
    int secondlargest =0;
    for(int i=1;i<4;i++)
    {
        if(firstlargest<arr[i])
        {
            secondlargest = firstlargest;
            firstlargest = arr[i];
        }
        
    }
    cout<<secondlargest<<endl;
    cout<<firstlargest<<endl;
    if(firstlargest > secondlargest)
    {
        cout<<secondlargest<<endl;
    }
    
}

void Reverse(int n)
{
    int rev=0;
    int m=n;
    int r;
    
    while(n>0)
    {
        r=n%10;
        rev=rev+r;
        n=n/10;
       
    }
    cout<<rev;
    
}
#include <iostream>

int main(int argc, const char * argv[])
{
    //int p = string_size("nandini");
    //cout<<p<<endl;
    
    //int arr[5]={5,10,15,5,1};
    //secondlargest(arr);
    
   //Reverse(1432);
    
    int n;
    cout<<"enter the no:"<<endl;
    cin>>n;
    
    if(n%3==0 && n%5==0)
    {
        cout<<"fizzbuzz"<<endl;
    }
    else if(n%5 == 0)
    {
        cout<<"buzz"<<endl;
    }
    else if(n%3==0)
    {
        cout<<"fizz"<<endl;
    }
    else
    {
        cout<<n<<endl;
    }
}
