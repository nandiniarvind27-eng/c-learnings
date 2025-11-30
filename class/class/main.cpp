//
//  main.cpp
//  class
//
//  Created by Nandini on 22/11/25.
//

#include <iostream>
#include <string>
class account
{
public:
    int n1;
    std::string name;
    
public:
    account()
    {
        n1=1;
        name = "nandy";
    };
};

int main(int argc, const char * argv[])
{
    account* m1 = new account[1];
    std::cout<<m1<<std::endl;
    std::cout<<m1[0].n1;

}
