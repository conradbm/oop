//
//  CurrentConditionDisplay.h
//  Observer_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#ifndef __Observer_Pattern__CurrentConditionDisplay__
#define __Observer_Pattern__CurrentConditionDisplay__

#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"


class CurrentConditionsDisplay : public Observer, DisplayElement {
    float temperature;
    float humidity;
    Subject *weatherData;
    
public:
    CurrentConditionsDisplay(Subject*);
    ~CurrentConditionsDisplay();
    void update(float,float,float); // Override From Observer
    void display();                 // Override From DisplayElement
};


#endif /* defined(__Observer_Pattern__CurrentConditionDisplay__) */
