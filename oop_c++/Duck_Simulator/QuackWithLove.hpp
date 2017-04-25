//
//  QuackWithLove.hpp
//  Test
//
//  Created by Conrad, Blake Matthew on 4/25/17.
//  Copyright © 2017 Conrad, Blake Matthew. All rights reserved.
//

#ifndef QuackWithLove_hpp
#define QuackWithLove_hpp

#include <stdio.h>
#include "QuackBehavior.hpp"

class QuackWithLove : public QuackBehavior
{
public:
    QuackWithLove(){}
    ~QuackWithLove(){}
    void quack();
};
#endif /* QuackWithLove_hpp */
