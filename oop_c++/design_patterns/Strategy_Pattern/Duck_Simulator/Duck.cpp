//
//  Duck.cpp
//  Test
//
//  Created by Conrad, Blake Matthew on 4/25/17.
//  Copyright © 2017 Conrad, Blake Matthew. All rights reserved.
//

#include "Duck.hpp"

void Duck::setFlyBehavior(FlyBehavior *fb){
    _flyBehavior= fb;
}
void Duck::setQuackBehavior(QuackBehavior *qb){
    _quackBehavior= qb;
}

void Duck::performFly(){
    _flyBehavior->fly();
}
void Duck::performQuack(){
    _quackBehavior->quack();
}
void Duck::swim(){
    cout << "Swimming, swimming, swimming." << endl;
}
