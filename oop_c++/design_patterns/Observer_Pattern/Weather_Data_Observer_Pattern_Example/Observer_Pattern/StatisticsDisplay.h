//
//  StatisticsDisplay.h
//  Observer_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#ifndef __Observer_Pattern__StatisticsDisplay__
#define __Observer_Pattern__StatisticsDisplay__

#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"

class StatisticsDisplay : public Observer, DisplayElement { // implements interface and inherits
    float maxTemp = 0.0f;   //keep track of maxTemp each time new data is put into our update()
    float minTemp = 200;    //keep track of minTemp each time new data is put into our udate()
    float tempSum= 0.0f;    //keep track of tempSum each time new data is put into our udate()
    int numReadings;        ///keep track of numReading for averaging our temperatures live feed
    Subject *weatherData;
public:
    StatisticsDisplay(Subject*);
    ~StatisticsDisplay();
    void update(float,float,float); // Overrides from Observer, dynamically types it too
    void display();                 // Overrides from DisplayElement
};

#endif /* defined(__Observer_Pattern__StatisticsDisplay__) */
