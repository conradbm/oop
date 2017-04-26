//
//  QuackNoWay.hpp
//  Test
//
//  Created by Conrad, Blake Matthew on 4/25/17.
//  Copyright © 2017 Conrad, Blake Matthew. All rights reserved.
//

#ifndef QuackNoWay_hpp
#define QuackNoWay_hpp

#include <stdio.h>
#include "QuackBehavior.hpp"

class QuackNoWay : public QuackBehavior
{
public:
    QuackNoWay(){}
    ~QuackNoWay(){}
    void quack();
};
#endif /* QuackNoWay_hpp */
