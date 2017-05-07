//
//  Observer.h
//  Observer_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#ifndef __Observer_Pattern__Observer__
#define __Observer_Pattern__Observer__

#include <stdio.h>

class Observer { // Class Interface -- meant to be inherited
    
public:
    virtual void update(float temp, float humidity, float pressure){}; // dumby implementation
};

#endif /* defined(__Observer_Pattern__Observer__) */
