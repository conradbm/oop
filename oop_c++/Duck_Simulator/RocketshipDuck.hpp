//
//  RocketshipDuck.h
//  
//
//  Created by Blake Conrad on 4/25/17.
//
//

#ifndef ____RocketshipDuck__
#define ____RocketshipDuck__

#include <stdio.h>
#include "Duck.hpp"
#include "FlyWithRocketExplosion.hpp"
#include "QuackWithAttitude.hpp"

class RocketshipDuck : public Duck{
public:
    RocketshipDuck();
    ~RocketshipDuck(){}
    void display();
};
#endif /* defined(____RocketshipDuck__) */
