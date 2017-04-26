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

int main(int argc, const char * argv[]) {

    
    RubberDuck *rd = new RubberDuck();
    RedDuck *redDuck = new RedDuck();
    
    rd->display();
    redDuck->display();
    
    return 0;
}
