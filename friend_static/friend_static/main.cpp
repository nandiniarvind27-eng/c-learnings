//
//  main.cpp
//  friend_static
//
//  Created by Nandini on 27/11/25.

//
class your;
class sum
{
private:
    int a;
protected:
    int b;
public:
    int c;
    
    friend  your;
    
};
class your
{
public:
    void add()
    {
        int c;
        sum s;
        s.a=10;
        s.b=10;
        s.c=20;
        //c = a+b+c;
       // std::cout<<c;
        
    }
};

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return EXIT_SUCCESS;
}
