//
//  WeatherData.h
//  
//
//  Created by Blake Conrad on 4/30/17.
//
//

#ifndef ____WeatherData__
#define ____WeatherData__

#include <vector>
using namespace std;

#include "Subject.h"
class Observer;

class WeatherData: public Subject {
    vector<Observer*> *observers;
    float temperature;
    float humidity;
    float pressure;
    
public:
    WeatherData();
    ~WeatherData(){};
    void registerObserver(Observer *);
    void removeObserver(Observer *);
    void notifyObservers();
    void measurementsChanged();
    void setMeasurements(float,float,float);
    float getTemperature();
    float getHumidity();
    float getPressure();
};

#endif /* defined(____WeatherData__) */

