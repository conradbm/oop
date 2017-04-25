//
//  RedDuck.cpp
//  Test
//
//  Created by Conrad, Blake Matthew on 4/25/17.
//  Copyright © 2017 Conrad, Blake Matthew. All rights reserved.
//

#include "RedDuck.hpp"



RedDuck::RedDuck(){
    setFlyBehavior(new FlyWithWings);
    setQuackBehavior(new QuackWithLove);
}

void RedDuck::display(){
    cout << "RED DUCK: " << endl;
    this->performFly();
    this->performQuack();
    this->swim();
    cout << endl;
}
