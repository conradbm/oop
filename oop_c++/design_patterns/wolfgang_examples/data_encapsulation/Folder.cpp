//
//  Folder.cpp
//  
//
//  Created by Blake Conrad on 4/29/17.
//
//

#include "Folder.h"
#include "string.h"
#include <vector>

void Folder::Init(char *folderName){
    
    if (docs != 0) {
        // report an error docs has already been called
        return;
    }
    
    SetFolderName(folderName);
    docs = new vector<TextDocument *>;
    
}

void Folder::SetFolderName(char *name){
    if (folderName != 0) {
        delete folderName;
    }
    
    folderName = new char[strlen(name) + 1];
    strcpy(folderName, name);
}

char *Folder::GetFolderName(){
    return folderName;
}

void Folder::AppendDoc(TextDocument *td){
    docs->push_back(td);
}

void Folder::RemoveDoc(TextDocument *td){
    docs->remove(td);
}

TextDocument *Folder::GetDoc(char *name){
    for (std::vector<TextDocument *>::iterator it = docs->begin();
         it != docs->end();
         ++it) {
        if (strcmp(*it->GetDocName(), name) == 0) {
            return td;
        }
    }
    return 0;
}