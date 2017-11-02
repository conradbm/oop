//
//  Roman_Numeral_Interpreter.cpp
//  Interpreter_Pattern
//
//  Created by Blake Conrad on 11/1/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#include "Roman_Numeral_Interpreter.h"


template <typename T, typename U>
Roman_Numeral_Interpreter<T,U>::Roman_Numeral_Interpreter(){
    _rng = Roman_Numeral_Grammar<U>();
    _total = 0;
}

template <typename T, typename U>
Roman_Numeral_Interpreter<T,U>::~Roman_Numeral_Interpreter(){
    
}

template <typename T, typename U>
T Roman_Numeral_Interpreter<T,U>::interpret(string user_input){
    
    
    // Validate the input through our grammar
    // if(_rng.validate(user_input)){
    //
    //    cout << "Interpreting..." << endl;
    //    // Acquire the value of the interpretation
    //    // I.e., total is updated by reference
    //    _rng.calculate(user_input, &_total);
    //
    // } else cout << "Word not in language" << endl;
    
    return _total;
    
}

