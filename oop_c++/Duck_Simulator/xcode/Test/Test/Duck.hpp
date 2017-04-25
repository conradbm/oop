//
//  Duck.hpp
//  Test
//
//  Created by Conrad, Blake Matthew on 4/25/17.
//  Copyright © 2017 Conrad, Blake Matthew. All rights reserved.
//

#ifndef Duck_hpp
#define Duck_hpp


// Standard Libraries
#include <stdio.h>

// Abstract Interfaces
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

class Duck{
    
private:
    FlyBehavior *_flyBehavior;
    QuackBehavior *_quackBehavior;
    
public:
    virtual void display() = 0;

    
public:
    void setFlyBehavior(FlyBehavior *fb);
    void setQuackBehavior(QuackBehavior *qb);
    void performFly();
    void performQuack();
    
public:
    void swim();
};

#endif /* Duck_hpp */
