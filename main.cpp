
//
//  While_loop.cpp
//  RoboticsDude_Practice
//
//  Created by Claudio Caldarescu on 3/23/17.
//  Copyright © 2017 Claudio Caldarescu. All rights reserved.
//

#include <iostream>
using namespace std;

int main( )
{
    int count;
    
    count = 1;        // initialize count
    while (count <= 10)
    {
        cout << count << "   ";
        count++;       // increment count
    }
    
    cout << endl;
    return 0;      //exits program
}
