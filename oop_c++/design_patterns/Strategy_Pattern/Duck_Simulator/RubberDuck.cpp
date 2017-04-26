//
//  RubberDuck.cpp
//  Test
//
//  Created by Conrad, Blake Matthew on 4/25/17.
//  Copyright © 2017 Conrad, Blake Matthew. All rights reserved.
//

#include "RubberDuck.hpp"

RubberDuck::RubberDuck(){
    setFlyBehavior(new FlyNoWay);
    setQuackBehavior(new QuackNoWay);
}

void RubberDuck::display(){
    cout << "RUBBER DUCK: " << endl;
    this->performFly();
    this->performQuack();
    this->swim();
    cout << endl;
}
