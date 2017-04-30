//
//  CurrentConditionDisplay.cpp
//  Observer_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#include "CurrentConditionDisplay.h"

#include <string>
#include <iostream>
using namespace std;

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject *weatherData) {
    this->weatherData = weatherData;
    this->weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure) {
    this->temperature = temperature;
    this->humidity = humidity;
    display();
}

void CurrentConditionsDisplay::display() {
    cout << "Current conditions:" << to_string(temperature) << "F degrees and " << to_string(humidity) << "% humidity" << endl;
    
}