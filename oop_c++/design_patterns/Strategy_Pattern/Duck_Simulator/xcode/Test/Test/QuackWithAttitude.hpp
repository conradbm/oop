//
//  QuackWithAttitude.h
//  
//
//  Created by Blake Conrad on 4/25/17.
//
//

#ifndef ____QuackWithAttitude__
#define ____QuackWithAttitude__

#include <stdio.h>
#include "QuackBehavior.hpp"

class QuackWithAttitude : public QuackBehavior
{
public:
    QuackWithAttitude(){}
    ~QuackWithAttitude(){}
    void quack();
};

#endif /* defined(____QuackWithAttitude__) */
