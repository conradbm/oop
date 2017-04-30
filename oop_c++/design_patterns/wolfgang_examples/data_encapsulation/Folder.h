//
//  Folder.h
//  
//
//  Created by Blake Conrad on 4/29/17.
//
//

#ifndef ____Folder__
#define ____Folder__

#include <stdio.h>
#include <vector>
#include "TextDocument.h"

class Folder {
    std::vector<TextDocument *> *docs;
    char *folderName;
    
public:
    void Init(char *folderName);
    void SetFolderName(char *name);
    char *GetFolderName();
    void AppendDoc(TextDocument *td);
    void RemoveDoc(TextDocument *td);
    TextDocument *GetDoc(char *name);
};

#endif /* defined(____Folder__) */
