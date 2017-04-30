//
//  TextDocument.cpp
//  
//
//  Created by Blake Conrad on 4/29/17.
//
//

#include "TextDocument.h"
#include "string.h"

void TextDocument::SetText(char *otherText){
    
    if (text != 0)
        delete text;          //free the memory
    
    text = new char[strlen(otherText)+1];   // +1 for the null char
    strcpy(text, otherText);                //text <- otherText
}

char *TextDocument::GetText(){
    return text;
}

void TextDocument::SetDocName(char *name){
    
    if (docName != 0)
        delete TdocName;
    
    docName = new char[strlen(name) + 1];   // +1 for the  \0 terminator
    strcpy(docName, name);                  // docName <- name
}

char *TextDocument::GetDocName(){
    
    return docName;
}

int TextDocument::GetTextLength(){
    if (text != 0) {
        return strlen(text);
    }
    else return 0;
}