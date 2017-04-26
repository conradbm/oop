//
//  main.cpp
//  Test
//
//  Created by Conrad, Blake Matthew on 4/25/17.
//  Copyright © 2017 Conrad, Blake Matthew. All rights reserved.
//

#include <iostream>
using namespace std;
#include "RubberDuck.hpp"
#include "RedDuck.hpp"
#include "RocketshipDuck.hpp"

int main(int argc, const char * argv[]) {

    
    RubberDuck *rd = new RubberDuck();
    RedDuck *redDuck = new RedDuck();
    RocketshipDuck *rsd = new RocketshipDuck();
    rd->display();
    redDuck->display();
    rsd->display();
    return 0;
}
