//
//  main.cpp
//  Homework6A
//
//  Created by Drew Sears on 6/13/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//
//write in integers

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    
ifstream input;
    
// Open a file
input.open("Exercise13_1.txt");
        
if (input.fail())
{
    cout << "File does not exist" << endl;
    cout << "Exit program" << endl;
    return 0;
}
    
input.close();
    
    cout << "File Found!" << endl;

    return 0;




}

