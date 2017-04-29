//
//  Subject.h
//  
//
//  Created by Blake Conrad on 4/28/17.
//
//

#ifndef ____Subject__
#define ____Subject__


#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

#include "Notify.h"

/* Solution to class interdepedence:
 
 1. The class with the template container should forward declare what it needs and
        not include that header, as we only need this class to store an object of that type
        we will later update what that type is, which doesn't matter at this moment.
 
 2. The Subject class, which needs a raw Subject *yourSubscription needs more details, so we 
        will allow that one to be included in the header via #include "Observer.h" and then
        use Observer as expected in it's class delcaration
 
 Reference: 
 http://stackoverflow.com/questions/16663207/c-how-to-create-classes-that-are-interdependent
 
 */

class Observer; // class forward declaration

class Subject : public Notify{
    
protected:
    std::vector<class Observer*> observers;
    std::string data;
public:
    Subject(){};
    ~Subject(){};
    void attach(Observer*);
    void setData(std::string);
    std::string getData();
    void notify(); // inherited from our interface
    
};

#endif /* defined(____Subject__) */
