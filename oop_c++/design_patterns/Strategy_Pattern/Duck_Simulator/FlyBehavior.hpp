//
//  FlyBehavior.hpp
//  Test
//
//  Created by Conrad, Blake Matthew on 4/25/17.
//  Copyright © 2017 Conrad, Blake Matthew. All rights reserved.
//

#ifndef FlyBehavior_hpp
#define FlyBehavior_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class FlyBehavior
{
public:
    FlyBehavior(){}
    virtual ~FlyBehavior(){}
    virtual void fly()=0;    // "=0" part makes this method pure
    
};

#endif /* FlyBehavior_hpp */
