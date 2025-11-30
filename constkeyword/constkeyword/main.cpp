//
//  main.cpp
//  constkeyword
//
//  Created by Nandini on 29/11/25.
//

#include <iostream>
using namespace std;
void add(const int&x, const int&y)
{
    x++;
    cout<<x;
    y++;
    cout<<y;
}
int main(int argc, const char * argv[])
{
     int x =10;
    int y= 20;
    int* ptr = &x;
    int* ptr1 = &y;
    add(x,y);
    
    //++(*ptr);
    
    cout<<*ptr;
    return EXIT_SUCCESS;
}
