//
//  main.cpp
//  functions
//
//  Created by Nandini on 17/11/25.
//

#include <iostream>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int add(int x,int y,int z)
{
    return x+y+z;
}
float add(float x,float y)
{
    return x+y;
}
void maximum (int a,int b,int c)
{
    if(a>b && a>c)
    {
        cout<<"a is greater"<<endl;
    }
    else  if(b>c)
    {
        cout<<"b is greater"<<endl;
    }
  else {
      cout<<"c is grater"<<endl;
    }
}
int pow(int m,int n)
{
    int result=1;
    for(int i=0;i<n;i++)
    {
        result = result*m;
    }
    return result;
}
template <class T>

    T mymax(T x,T y)
    {
        if(x>y)
            return x;
        else
            return y;
    }
 void swap (int &a,int &b)
{
     int temp;
     temp =a;
     a=b;
     b= temp;
     cout<<a<<" "<<b<<endl;
 }

int * func(int size)
{   int *p;
    cout<<*p<<" "<<p<<endl;
     p = new int[size];
    cout<<*p<<" "<<p<<endl;
    for(int i=0;i<size;i++)
    {
        p[i]=i+1;
    }
    return p;
}
void recurivefunc(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        recurivefunc(n-1);
    }
}

int main()
{
    recurivefunc(6);
    //int a,b,c;
    //a=10;b=20;c=30;
    //int x=20;int y=30;
    //swap(x, y);
    //cout<<x<<" "<<y<<endl;
    //int *ptr=func(5);
    //for(int i=1;i<=5;i++)
   // {
       // cout<<ptr[i]<<endl;
   // }
    //int d = mymax(c,a);
    //float f =mymax(5.5f,7.9f);

    //cout<<d<<endl;
    //cout<<f<<endl;
    
    //res = pow(2,5);
   // cout<<res<<endl;
 
    
}
