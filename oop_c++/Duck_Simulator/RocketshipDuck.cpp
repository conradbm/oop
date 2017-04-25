//
//  RocketshipDuck.cpp
//  
//
//  Created by Blake Conrad on 4/25/17.
//
//

#include "RocketshipDuck.hpp"

RocketshipDuck::RocketshipDuck(){
    setFlyBehavior(new FlyWithRocketExplosion());
    setQuackBehavior(new QuackWithAttitude());
}

void RocketshipDuck::display(){
    cout << "ROCKETSHIP DUCK: " << endl;
    this->performFly();
    this->performQuack();
    this->swim();
    cout << endl;
}