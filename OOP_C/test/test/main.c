//
//  main.c
//  test
//
//  Created by Blake Conrad on 4/29/17.
//  Copyright (c) 2017 Blake Conrad. All rights reserved.
//

#include <stdio.h>


typedef struct Book {
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
    
}Book;

typedef struct Container{
    Book *list;
    int MEM_SIZE_ALLOC;
    int MEM_SIZE_AVAIL;
}Container;


Book* createList(Book *b, int numberOfItems){
    
    printf("Created.\n");
    b=malloc(numberOfItems * sizeof(Book));
    
    Book yourFirstBook = {"The Grinch Who Stole Christmas.","Dr. Suess.", "Amazing", 0};
    Book yourSecondBook = {"The Bible","God", "Religion", 1};
    b[0] = yourFirstBook;
    b[1] = yourSecondBook;
    
    // memcpy(where, who, howbig);
    return b;
}

void printFunction(Book *b){
    
}

int main(int argc, const char * argv[]) {

    Book *list = 0;
    list = createList(list, 5);
    
    int i;
    for (i=0; i < 5; i++) {
        printf("%s\t%s\t%s\t%d\n", list[i].title, list[i].author, list[i].subject, list[i].book_id);
    }
    memset(list, 0, 5);
    return 0;
}
