//
//  Interpreter.h
//  Interpreter_Pattern
//
//  Created by Blake Conrad on 11/1/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#ifndef __Interpreter_Pattern__Interpreter__
#define __Interpreter_Pattern__Interpreter__

#include <stdio.h>
#include <string>
using namespace std;

/************************/
/* Abstract Interpreter */
/************************/
//
// - Allows for interpretation flexibility of any type
//   - E.g., Roman Numerals Interpretation T --> Integer,
//                   Syntax Interpretation T --> Boolean,
//                 Language Interpretation T --> String, ect...
//
template <class T>
class Interpreter {
public:
    virtual T interpret(string) = 0;
};

#endif /* defined(__Interpreter_Pattern__Interpreter__) */
