//
//  Roman_Numeral_Grammar.h
//  Interpreter_Pattern
//
//  Created by Blake Conrad on 11/1/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#ifndef __Interpreter_Pattern__Roman_Numeral_Grammar__
#define __Interpreter_Pattern__Roman_Numeral_Grammar__

#include <stdio.h>
#include "Grammar.h"
#include <string>
using namespace std;

/*******************************/
/* Roman Numeral Grammar Class */
/*******************************/
//
// - We define the language L as our set of all possible strings accepted by a grammar G.
//     Let L = {'I', 'II', 'III', 'IV','V','VI','VII','VIII','IX','X', ... , 'D'}
//     Let G be defined by 4 arguments (S, T, NT, F), Start Symbols, Terminal Symbols, Non-Terminal Symbols, and Final Symbols.
//       where S = {S}
//             T = {'I', 'II', 'III', 'IV','V','VI','VII','VIII','IX', 'lambda'}
//             NT = {A, B, C, D, E, F, G, H, I, J, K, M, N}
//             F = NT
//
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
//
// - E.g., LXIII = 43; lB -> lxA -> lxE | lxiii accepted in the language.
//
//   Roman_Numeral_Grammar g;
//   if(g.evaluate('lxiii')){
//
//      // Allow access to get values
//
//   }

template <class U>
class Roman_Numeral_Grammar : public Grammar<U> {
    
private:
    
    // For value calculation
    bool S(string input, int *total=NULL); // start
    void A(string input, int *total=NULL);
    void B(string input, int *total=NULL);
    void C(string input, int *total=NULL);
    void D(string input, int *total=NULL);
    void E(string input, int *total=NULL);
    void F(string input, int *total=NULL);
    void G(string input, int *total=NULL);
    void H(string input, int *total=NULL);
    void I(string input, int *total=NULL);
    void J(string input, int *total=NULL);
    void K(string input, int *total=NULL);
    void M(string input, int *total=NULL);
    
    // For validation
    bool S(string input); // start
    void A(string input);
    void B(string input);
    void C(string input);
    void D(string input);
    void E(string input);
    void F(string input);
    void G(string input);
    void H(string input);
    void I(string input);
    void J(string input);
    void K(string input);
    void M(string input);

public:
    Roman_Numeral_Grammar<U>();
    ~Roman_Numeral_Grammar<U>();
    bool validate(string input);
    void calculate(string input, int &total);
    int getIndex();
    void setIndex(int i);

};


#endif /* defined(__Interpreter_Pattern__Roman_Numeral_Grammar__) */
