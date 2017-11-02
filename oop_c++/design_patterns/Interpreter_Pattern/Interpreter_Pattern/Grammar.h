//
//  Grammar.h
//  Interpreter_Pattern
//
//  Created by Blake Conrad on 11/1/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#ifndef __Interpreter_Pattern__Grammar__
#define __Interpreter_Pattern__Grammar__

#include <stdio.h>
#include <vector>
#include <vector>
using namespace std;

/**************************/
/* Abstract Grammar Class */
/**************************/
//
// The type T will define what class of terminal we can see before a NT or as a T.
// E.g., For Roman Numerals, we may see 'x', 'l', 'c', or 'i' before a NT in the grammar.
//
// The grammar will use recursion and functions rather than classes and loops

template <class U>
class Grammar {
protected:
    
    // For dynamic generation extension
    const vector<char*> start_symbols;
    const vector<char*> terminal_symbols;
    const vector<char*> non_terminal_symbols;
    const vector<char*> final_symbols;
    U prepended_atom;
    
    // State index pointer
    int _index;
    
public:
    virtual bool validate(string) = 0;
    virtual int getIndex() = 0;
    virtual void setIndex(int) = 0;
};

#endif /* defined(__Interpreter_Pattern__Grammar__) */
