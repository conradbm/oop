//
//  HasQuarterState.cpp
//  State_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#include "HasQuarterState.h"


HasQuarterState::HasQuarterState(GumballMachine *gumballMachine) {
    this->gumballMachine = gumballMachine;
}

void HasQuarterState::insertQuarter() {
    cout << "You can't insert another quarter" << endl;
}

void HasQuarterState::ejectQuarter() {
    cout << "Quarter returned" << endl;
    this->gumballMachine->setState(this->gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank() {
    cout << "You turned with ..." << endl;
    this->gumballMachine->setState(this->gumballMachine->getSoldState());
}

void HasQuarterState::dispense() {
    
    cout << "No gumball dispensed" << endl;
}

string HasQuarterState::toString(){
    return "waiting for turn of crank";
}
