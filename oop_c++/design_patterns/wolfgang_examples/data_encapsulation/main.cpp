//
//  main.cpp
//
//
//  Created by Blake Conrad on 4/29/17.
//
//


#include <iostream>
#include <string>
#include "TextDocument.h"
#include "Folder.h"

using namespace std;

int main(void){
    
    TextDocument *sampleDoc;
    sampleDoc = new TextDocument;
    
    char *myChar = new char[3];
    myChar[0]='a';
    myChar[1]='b';
    myChar[2]='\0';
    sampleDoc->SetText(myChar);
    return 0;
}