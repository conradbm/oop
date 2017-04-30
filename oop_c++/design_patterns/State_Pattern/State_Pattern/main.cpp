//
//  main.cpp
//  State_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//
//
// This program is meant to be a small reproducible State Pattern example.

#include <iostream>
#include "GumballMachine.h"
int main(int argc, const char * argv[]) {
    
    
    /*
     Comon' man, you know how this goes.
     Standard gumball machine methods:
     1. void insertQuarter();
     2. void ejectQuarter();
     3. void turnCrank();
     4. void releaseBall();
     */
    GumballMachine *gumBallMachine = new GumballMachine(5);
    gumBallMachine->insertQuarter();
    gumBallMachine->ejectQuarter();
    gumBallMachine->turnCrank();
    gumBallMachine->insertQuarter();
    gumBallMachine->turnCrank();
    
    
    return 0;
}
