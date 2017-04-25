//
//  FlyNoWay.hpp
//  Test
//
//  Created by Conrad, Blake Matthew on 4/25/17.
//  Copyright © 2017 Conrad, Blake Matthew. All rights reserved.
//

#ifndef FlyNoWay_hpp
#define FlyNoWay_hpp

#include <stdio.h>
#include "FlyBehavior.hpp"

class FlyNoWay : public FlyBehavior
{
public:
    FlyNoWay(){}
    ~FlyNoWay(){}
    void fly();
};


#endif /* FlyNoWay_hpp */
