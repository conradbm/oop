//
//  SoldOutState.cpp
//  State_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#include "SoldOutState.h"


SoldOutState::SoldOutState(GumballMachine *gumballMachine) {
    this->gumballMachine = gumballMachine;
}

void SoldOutState::insertQuarter() {
    cout << "You can't insert a quarter, the machine is sold out" << endl;
}

void SoldOutState::ejectQuarter() {
    cout << "You can't eject, you haven't inserted a quarter yet" << endl;
}

void SoldOutState::turnCrank() {
    cout << "You turned, but there are no gumballs" << endl;
}

void SoldOutState::dispense() {
    cout << "No gumball dispensed" << endl;
}

std::string SoldOutState::toString() {
    return "sold out";
}
