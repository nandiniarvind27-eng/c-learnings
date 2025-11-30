//
//  main.cpp
//  arrays
//
//  Created by Nandini on 15/11/25.
//

#include <iostream>
using namespace std;
#include <string.h>
int main(int argc, const char * argv[])
{
    //sum of array
    /*
     int numbers[6]={1,2,3,4,5,6};
     int sum=0;
     //int size = sizeof(numbers)/sizeof(numbers[0]);
     for(int i=0;i<=size;i++)
     {
     cout<<numbers[i]<<endl;
     }
     for(auto x:numbers)
     {
     sum=sum+x;
     }
     cout<<sum<<endl;*/
    
    //max in array
    /*
     int num[6]={10,4,5,11,19,27};
     int size= sizeof(num)/sizeof(num[0]);
     int max =0;
     
     for(int i=0;i<size;i++)
     {
     if(max<num[i])
     {
     max = num[i];
     }
     }
     cout<<"the max no is:"<<""<<max<<endl;*/
    
    //linear search
    /*
     int num[6];
     int size= sizeof(num)/sizeof(num[0]);
     int key;
     bool found =false;
     cout<<"Enter the numbers:"<<endl;
     for(int i=0;i<size;i++)
     {
     cin>>num[i];
     }
     cout<<"enter the number to find:"<<endl;
     cin>>key;
     
     for(int i=0;i<size;i++)
     {
     if(key == num[i])
     {
     cout<<"found the key "<<num[i]<<"in the index "<<i+1<<endl;
     found = true;
     break;
     }
     }
     if(!found)
     cout<<"not found";
     */
    
    //binary search
    
    /*  int num[7]={10,20,30,40,50,60,70};
     int l=0,h=6,m,key;
     bool found = false;
     cout<<"Enter the key:"<<endl;
     cin>>key;
     while(l<=h)
     {
     m=(l+h)/2;
     if(key == num[m])
     {
     cout<<"found it "<<key<<"at the index of "<<m<<endl;
     found = true;
     break;
     }
     else if(key > num[m])
     {
     l=m+1;
     }
     else if(key <num[m])
     {
     h=m-1;
     }
     
     }
     if(!found)
     {
     cout<<"key not found "<<key;
     }*/
    
    //Count number of negative and positive numbers in Array
    
    /*int a[]={1,2,3,-9,-1,8,-2,-10};
     int pcount=0;
     int ncount=0;
     
     for(auto x:a)
     {
     if(x>0)
     {
     pcount++;
     }
     else
     {
     ncount++;
     }
     }
     cout<<"positive count is "<<pcount<<endl;
     cout<<"negative count is "<<ncount<<endl;
     */
    
    //draw a square of *
    
    /* for(int i=1;i<=4;i++)
     {
     for(int j=1;j<=i;j++)
     {
     cout<<"*"<<" ";
     }
     cout<<endl;
     
     }*/
    
    /*int num[6];
     int sum=1;
     cout<<"enter the no: "<<endl;
     
     int size = sizeof(num)/sizeof(num[0]);
     for(int i=0;i<size;i++)
     {
     cin>>num[i];
     sum=(sum*num[i]);
     }
     //sum=sum/size;
     cout<<sum;
     */
    
    //strings
    
    /*string name;
     cout<<"Enter the name"<<endl;
     cin>>name;
     
     cout<<name<<" "<< "the length is:"<<name.length()<<endl;*/
    
    /*string myString = "illi";
    string str2;
    for(int i=3;i>=0;i--)
    {
        str2 += myString[i];
    }
    if(str2 == myString)
    {
        cout<<"is palindrome";
    }
    else
        cout<<"not a palindrome";*/
    
    //string functions
    
   /* string name ="nandini";
    string str;
    name.insert(0,"K");
    cout<<name<<endl;
    name.replace(0,1,"A");
    cout<<name<<endl;
    name.push_back('S');
    cout<<name<<endl;
    name.pop_back();
    cout<<name<<endl;
    name.swap(str);
    cout<<str<<endl;*/
    
    string::iterator it;
    string name = "nandini";
    int count=0;
    for(it = name.begin();it!=name.end();it++)
    {
        //*it = tolower(*it);
        *it = *it - 32;
        cout<<*it<<endl;
        
    }
    //cout<<count;
    
    //length of a string
    //string str = "welcome";
    //cout<<str.length()<<endl;
    
    
    
    
    
    
    
    
    
}
