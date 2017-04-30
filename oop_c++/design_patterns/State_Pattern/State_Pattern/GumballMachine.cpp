//
//  GumballMachine.cpp
//  State_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#include "GumballMachine.h"
#include "State.h"
#include "SoldOutState.h"
#include "SoldState.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include <vector>
#include <string>
#include <numeric>


GumballMachine::GumballMachine(int numberGumballs) {
    
    cout << "Your gumball machine has been loaded with: "<< to_string(numberGumballs) << endl;
    soldOutState = new SoldOutState(this);
    noQuarterState = new NoQuarterState(this);
    hasQuarterState = new HasQuarterState(this);
    soldState = new SoldState(this);
    
    this->state = soldOutState;
    this->count = numberGumballs;
    if (numberGumballs > 0) {
        state = noQuarterState;
    }
}


void GumballMachine::insertQuarter() {
    this->state->insertQuarter();
}

void GumballMachine::ejectQuarter() {
    cout << "Trying to eject quarter..." << endl;
    this->state->ejectQuarter();
}

void GumballMachine::turnCrank() {
    cout << "Trying to turn the crank..." << endl;
    this->state->turnCrank();
    this->state->dispense();
}

void GumballMachine::releaseBall() {
    cout << "A gumball comes rolling out the slot..." << endl;
    if (count != 0) {
        count = count - 1;
    }
}

int GumballMachine::getCount() {
    return this->count;
}

void GumballMachine::refill(int count) {
    this->count = count;
    state = noQuarterState;
}

void GumballMachine::setState(State *state) {
    this->state = state;
}
State* GumballMachine::getState() {
    return state;
}

State* GumballMachine::getSoldOutState() {
    return soldOutState;
}

State* GumballMachine::getNoQuarterState() {
    return noQuarterState;
}

State* GumballMachine::getHasQuarterState() {
    return hasQuarterState;
}

State* GumballMachine::getSoldState() {
    return soldState;
}

string GumballMachine::toString() {
    
    string s;
    vector<string> result;
    result.push_back("\nMighty Gumball, Inc.");
    result.push_back("\nJava-enabled Standing Gumball Model #2004");
    string tmp = "\nInventory: ";
    tmp+= to_string(count);
    tmp+= " gumball";
    result.push_back(tmp);
    if (count != 1) {
        result.push_back("s");
    }
    result.push_back("\n");
    tmp = "Machine is ";
    tmp += this->state->toString();
    tmp += "\n";
    result.push_back(tmp);
    s = accumulate(begin(result), end(result), s);
    return s;
}