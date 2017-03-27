#include <stdio.h>
#define MAX_DATA_FRAMES 20

typedef struct data_frame {
    
    char* name;
    void* data;
    
}data_frame;

data_frame* createDataFrame(char *name, void* data);
void freeDataFrame();
