#include <stdio.h>

struct data_frame {
    
    char* name;
    int* data;
    
};



int main()
{
    int x[9] = {1,2,3,4,5,6,7,8,9};
    char *name = "Object1";
    
    struct data_frame* newdf <- (struct data_frame*) malloc(sizeof(struct data_frame));
    
    
    
    printf("data: %d\n" , df->data[3]);
    printf("%s\n",df->name);
    return 0;
}
