//
//  Observer.h
//  
//
//  Created by Blake Conrad on 4/28/17.
//
//

#ifndef ____Observer__
#define ____Observer__

#include <stdio.h>
#include <iostream>
using namespace std;

#include "Update.h"
#include "Subject.h"

class Observer : public Update {
protected:
    Subject *subj;
    std::string data;
public:
    Observer(Subject*);
    ~Observer(){};
    void update(); //inherited from our interface
    void setData(std::string);
};

#endif /* defined(____Observer__) */
