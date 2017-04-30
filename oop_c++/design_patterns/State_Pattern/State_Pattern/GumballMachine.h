//
//  GumballMachine.h
//  State_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#ifndef __State_Pattern__GumballMachine__
#define __State_Pattern__GumballMachine__

class State;
#include <iostream>
#include <string>
#include <numeric>
using namespace std;

class GumballMachine {
    State *soldOutState;
    State *noQuarterState;
    State *hasQuarterState;
    State *soldState;
    
    State *state;
    int count;
    
public:
    GumballMachine(int);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void releaseBall();
    int getCount();
    void refill(int);
    void setState(State*);
    State *getState();
    State* getSoldOutState();
    State* getNoQuarterState();
    State* getHasQuarterState();
    State* getSoldState();
    string toString();
};

#endif /* defined(__State_Pattern__GumballMachine__) */

