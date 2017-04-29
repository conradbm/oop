//
//  Observer.cpp
//  
//
//  Created by Blake Conrad on 4/28/17.
//
//

#include "Observer.h"

Observer::Observer(Subject *newSubscription){
    
    // This sets our reference to the new desired subscription
    subj = newSubscription;
    subj->attach(this);
}

void Observer::update(){
    
    cout << "We got some new data:" << endl;
    cout << subj->getData() << endl;
}

void Observer::setData(std::string incData){
    data = incData;
}