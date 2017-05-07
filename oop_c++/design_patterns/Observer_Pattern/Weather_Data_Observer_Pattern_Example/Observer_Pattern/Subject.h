//
//  Subject.h
//  Observer_Pattern
//
//  Created by Blake Conrad on 4/30/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#ifndef __Observer_Pattern__Subject__
#define __Observer_Pattern__Subject__

#include <stdio.h>
#include "Observer.h"

class Subject { // Interface Class -- meant to be inherited

public:
    virtual void registerObserver(Observer*){}; // dummy implementation
    virtual void removeObserver(Observer*){};   // dummy implementation
    virtual void notifyObservers(){};           // dummy implementation
};

#endif /* defined(__Observer_Pattern__Subject__) */
