//
//  TextDocument.h
//  
//
//  Created by Blake Conrad on 4/29/17.
//
//

#ifndef ____TextDocument__
#define ____TextDocument__

#include <stdio.h>

class TextDocument {
    char *text;
    char *docName;
public:
    TextDocument() : text(nullptr), docName(nullptr) {}
    void SetText(char *otherText);
    char *GetText();
    void SetDocName(char *newName);
    char *GetDocName();
    int GetTextLength();
};

#endif /* defined(____TextDocument__) */
