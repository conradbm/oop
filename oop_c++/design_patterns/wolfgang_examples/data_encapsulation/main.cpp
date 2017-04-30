//
//  main.cpp
//
//
//  Created by Blake Conrad on 4/29/17.
//
//


#include <iostream>
#include "string.h"
#include "TextDocument.h"
#include "Folder.h"

using namespace std;

int main(void){
    
    TextDocument *sampleDoc;
    sampleDoc = new TextDocument;
    
    
    sampleDoc->SetText((char *)"some str"); // I have no idea why there is a linker error here.
    
    return 0;
}