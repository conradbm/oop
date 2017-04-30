//
//  NoQuarterState.cpp
//  State_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#include "NoQuarterState.h"

NoQuarterState::NoQuarterState(GumballMachine *gumballMachine) {
    this->gumballMachine = gumballMachine;
}

void NoQuarterState::insertQuarter() {
    cout << "You inserted a quarter" << endl;
    this->gumballMachine->setState(gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter() {
    cout << "You haven't inserted a quarter" << endl;
}

void NoQuarterState::turnCrank() {
    cout << "You turned, but there's no quarter" << endl;
}

void NoQuarterState::dispense() {
    cout << "You need to pay first" << endl;
}

std::string NoQuarterState::toString() {
    return "waiting for quarter";
}