//
//  main.cpp
//  inheritance
//
//  Created by Nandini on 24/11/25.
//
#include<iostream>
using namespace std;

class car
{
    
public:

    virtual void display() =0;
  
    
};
class innova:public car
{
public:

    void display()
    {
       cout<<"innova class display is called:"<<endl;
    }
};
class kia:public car
{
public:

    void display()
    {
        cout<<"kia class display is called:"<<endl;
    }
};
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    //derived d(10,10);
    car * d = new kia();
    d->display();
    d = new innova();
    d->display();
    
    return EXIT_SUCCESS;
}
