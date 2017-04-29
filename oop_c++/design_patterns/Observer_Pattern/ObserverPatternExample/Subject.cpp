//
//  Subject.cpp
//  
//
//  Created by Blake Conrad on 4/28/17.
//
//

#include "Subject.h"


void Subject::attach(Observer* newListener){
    cout << "Attached." << endl;
    Subject::observers.push_back(newListener);
}

void Subject::notify(){
    
    // Tell every listener to update because our data changed
    for (int i = 0; i < Subject::observers.size(); i++) {
        Subject::observers[i]->update();
    }
}

void Subject::setData(std::string newDataString){
    
    // Notify listeners things changed
    Subject::data = newDataString;
    Subject::notify();
}

std::string Subject::getData(){
    
    // Get this subjects data;
    return Subject::data;
}