//
//  FlyWithRocketExplosion.h
//  
//
//  Created by Blake Conrad on 4/25/17.
//
//

#ifndef ____FlyWithRocketExplosion__
#define ____FlyWithRocketExplosion__

#include <stdio.h>
#include "FlyBehavior.hpp"

class FlyWithRocketExplosion : public FlyBehavior
{
public:
    FlyWithRocketExplosion(){}
    ~FlyWithRocketExplosion(){}
    void fly();
};
#endif /* defined(____FlyWithRocketExplosion__) */
