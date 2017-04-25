//
//  QuackBehavior.hpp
//  Test
//
//  Created by Conrad, Blake Matthew on 4/25/17.
//  Copyright © 2017 Conrad, Blake Matthew. All rights reserved.
//

#ifndef QuackBehavior_hpp
#define QuackBehavior_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class QuackBehavior
{
public:
    QuackBehavior(){}
    virtual ~QuackBehavior(){}
    virtual void quack()=0;    // "=0" part makes this method pure
    
};

#endif /* QuackBehavior_hpp */
