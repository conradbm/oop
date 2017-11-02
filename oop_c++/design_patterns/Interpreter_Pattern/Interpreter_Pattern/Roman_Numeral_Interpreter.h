//
//  Roman_Numeral_Interpreter.h
//  Interpreter_Pattern
//
//  Created by Blake Conrad on 11/1/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#ifndef __Interpreter_Pattern__Roman_Numeral_Interpreter__
#define __Interpreter_Pattern__Roman_Numeral_Interpreter__

#include <stdio.h>
#include "Interpreter.h"
#include "Roman_Numeral_Grammar.h"
#include <string>
using namespace std;

/*****************************/
/* Roman Numeral Interpreter */
/*****************************/
//
// - Leverages the Abstract Interpreter Interface for general interpretation flexbility
// - RN Interpretation is a String to Integer conversion
//   - I.e., T --> Integer, because we want an integer result
//           U --> String, because the grammar looks for characters
//
// - General instantiation:
//      Roman_Numeral_Interpreter<int, char> RNI;
//      int result = RNI.interpret("MCXLIII");
//

template <class T, class U>
class Roman_Numeral_Interpreter : public Interpreter<T> {
private:
    Roman_Numeral_Grammar<U> _rng;
    T _total;
    
public:
    Roman_Numeral_Interpreter<T,U>();
    ~Roman_Numeral_Interpreter<T,U>();
    T interpret(string user_input);
};
#endif /* defined(__Interpreter_Pattern__Roman_Numeral_Interpreter__) */
