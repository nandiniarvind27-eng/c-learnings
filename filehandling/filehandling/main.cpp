//
//  main.cpp
//  filehandling
//
//  Created by Nandini on 29/11/25.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[])
{
    ofstream obj("my.txt");
    obj<<"hello"<<endl;
    obj.close();
    
    return EXIT_SUCCESS;
}
