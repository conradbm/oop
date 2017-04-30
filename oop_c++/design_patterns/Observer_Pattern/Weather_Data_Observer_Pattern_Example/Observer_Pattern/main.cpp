//
//  main.cpp
//  Observer_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionDisplay.h"
#include "StatisticsDisplay.h"

int main(int argc, const char * argv[]) {
    
    WeatherData *weatherData = new WeatherData();
    CurrentConditionsDisplay *ccd = new CurrentConditionsDisplay(weatherData);
    StatisticsDisplay *sd = new StatisticsDisplay(weatherData);
    weatherData->setMeasurements(80, 65, 30.4f);
    weatherData->setMeasurements(82, 70, 29.2f);
    weatherData->setMeasurements(78, 90, 29.2f);
    return 0;
}
