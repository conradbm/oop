//
//  State.h
//  State_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#ifndef __State_Pattern__State__
#define __State_Pattern__State__

#include <stdio.h>
#include <string>
using namespace std;

// This class is purely an interface, i.e., just methods for children to override
// We have 4 different states to the gumball machine we will be making:
// 1. NoQuarterState
// 2. HasQuarterState
// 3. SoldOutState
// 4. SoldState

class State { // State Abstract Class/Interface
public:
    virtual void insertQuarter(){};
    virtual void ejectQuarter(){};
    virtual void turnCrank(){};
    virtual void dispense(){};
    virtual string toString()=0;
};

#endif /* defined(__State_Pattern__State__) */
