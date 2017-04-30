//
//  WeatherData.cpp
//  
//
//  Created by Blake Conrad on 4/30/17.
//
//

#include "WeatherData.h"
#include "Observer.h"

#include <iostream>
using namespace std;

WeatherData::WeatherData() {
    observers = new vector<Observer*>;
}

void WeatherData::registerObserver(Observer *o) {
    cout << "Attached an observer." << endl;
    observers->push_back(o);
}

void WeatherData::removeObserver(Observer *o) {
    cout << "Removed an observer." << endl;
    observers->erase(std::remove(observers->begin(), observers->end(), o), observers->end());
}

void WeatherData::notifyObservers() {
    
    for (std::vector<Observer*>::iterator it = observers->begin();
         it != observers->end(); ++it) {
        (*it)->update(temperature, humidity, pressure); //*it is a reference to one of those observers
    }

}

void WeatherData::measurementsChanged() {
    notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure) {
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementsChanged();
}

float WeatherData::getTemperature() {
    return this->temperature;
}

float WeatherData::getHumidity() {
    return this->humidity;
}

float WeatherData::getPressure() {
    return this->pressure;
}