//
//  Roman_Numeral_Grammar.cpp
//  Interpreter_Pattern
//
//  Created by Blake Conrad on 11/1/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#include "Roman_Numeral_Grammar.h"

template <typename U>
Roman_Numeral_Grammar<U>::Roman_Numeral_Grammar(){
    
    this->_index = 0;
}

template <typename U>
Roman_Numeral_Grammar<U>::~Roman_Numeral_Grammar(){
    
}

template <typename U>
int Roman_Numeral_Grammar<U>::getIndex(){
    
    return this->_index;
}

template <typename U>
void Roman_Numeral_Grammar<U>::setIndex(int i){
    
    this->_index = i;
}


template <typename U>
bool Roman_Numeral_Grammar<U>::validate(string input){
    
    // Make sure some_input is in the language
    return true;
    
}

//     S -> 'x'A | 'l'B | 'c'C | 'd'D | E
//   * A -> 'x'F | 'c'I | 'l'H | E
//     F -> 'x'G | E
//     G -> E
//     I -> E
//     H -> E
//   * B -> 'x'A | E
//   * C -> 'l'B | 'x'A | 'c'J | 'd'M | E
//     J -> 'c'K | 'l'B | 'x'A | E
//     K -> 'l'B | | 'x'A | 'E
//     M -> 'l'B | 'x'A | E
//   * D -> 'c'C | 'l'B | 'x'A | E


// all validate functions and rules

// all parse functions and rules