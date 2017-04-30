//
//  NoQuarterState.h
//  State_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#ifndef __State_Pattern__NoQuarterState__
#define __State_Pattern__NoQuarterState__

#include "State.h"
#include "GumballMachine.h"

#include <iostream>
#include <string>
using namespace std;
// 1. NoQuarterState
// 2. HasQuarterState
// 3. SoldOutState
// 4. SoldState

class NoQuarterState : public State { // implements State; in Java
    GumballMachine *gumballMachine;
    
public:
    NoQuarterState(GumballMachine*);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    string toString();
};

#endif /* defined(__State_Pattern__NoQuarterState__) */
