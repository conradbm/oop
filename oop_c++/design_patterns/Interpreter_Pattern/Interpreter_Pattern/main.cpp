//
//  main.cpp
//  Interpreter_Pattern
//
//  Created by Blake Conrad on 11/1/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#include <iostream>
#include "Roman_Numeral_Interpreter.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Roman_Numeral_Interpreter<int, char> rni;
    cout << rni.interpret("LXXXI") << endl;
    
    
    return 0;
}
