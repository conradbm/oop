//
//  StatisticsDisplay.cpp
//  Observer_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#include "StatisticsDisplay.h"
#include "WeatherData.h"

#include <iostream>
#include <string>
using namespace std;


StatisticsDisplay::StatisticsDisplay(Subject *weatherData) {
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void StatisticsDisplay::update(float temp, float humidity, float pressure) {
    tempSum += temp;
    numReadings++;
    
    if (temp > maxTemp) {
        maxTemp = temp;
    }
    
    if (temp < minTemp) {
        minTemp = temp;
    }
    
    display();
}

void StatisticsDisplay::display() {
    
    cout << "Avg/Max/Min temperature = " << to_string((tempSum / numReadings)) << "/" << to_string(maxTemp) << "/" << to_string(minTemp) << endl;
}
