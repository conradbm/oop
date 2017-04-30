//
//  SoldState.cpp
//  State_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#include "SoldState.h"


SoldState::SoldState(GumballMachine *gumballMachine) {
    this->gumballMachine = gumballMachine;
}

void SoldState::insertQuarter() {
    cout << "Please wait, we're already giving you a gumball" << endl;
}

void SoldState::ejectQuarter() {
    cout << "Sorry, you already turned the crank" << endl;
}

void SoldState::turnCrank() {
    cout << "Turning twice doesn't get you another gumball!" << endl;
}

void SoldState::dispense() {

    this->gumballMachine->releaseBall();
    if (this->gumballMachine->getCount() > 0) {
        this->gumballMachine->setState(this->gumballMachine->getNoQuarterState());
    } else {
        cout << "Oops, out of gumballs!" << endl;
        this->gumballMachine->setState(this->gumballMachine->getSoldOutState());
    }
}

std::string SoldState::toString() {
    return "dispensing a gumball";
}
