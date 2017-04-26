//
//  RedDuck.hpp
//  Test
//
//  Created by Conrad, Blake Matthew on 4/25/17.
//  Copyright © 2017 Conrad, Blake Matthew. All rights reserved.
//

#ifndef RedDuck_hpp
#define RedDuck_hpp

#include <stdio.h>
#include "Duck.hpp"
#include "FlyWithWings.hpp"
#include "QuackWithLove.hpp"

class RedDuck : public Duck{
public:
    RedDuck();
    void display();
};

#endif /* RedDuck_hpp */
