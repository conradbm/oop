//
//  RubberDuck.hpp
//  Test
//
//  Created by Conrad, Blake Matthew on 4/25/17.
//  Copyright © 2017 Conrad, Blake Matthew. All rights reserved.
//

#ifndef RubberDuck_hpp
#define RubberDuck_hpp

#include <stdio.h>
#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "QuackNoWay.hpp"

class RubberDuck : public Duck{
public:
    RubberDuck();
    void display();
};

#endif /* RubberDuck_hpp */
