//
//  FlyWithWings.hpp
//  Test
//
//  Created by Conrad, Blake Matthew on 4/25/17.
//  Copyright © 2017 Conrad, Blake Matthew. All rights reserved.
//

#ifndef FlyWithWings_hpp
#define FlyWithWings_hpp

#include <stdio.h>
#include "FlyBehavior.hpp"

class FlyWithWings : public FlyBehavior
{
public:
    FlyWithWings(){}
    ~FlyWithWings(){}
    void fly();
};


#endif /* FlyWithWings_hpp */
