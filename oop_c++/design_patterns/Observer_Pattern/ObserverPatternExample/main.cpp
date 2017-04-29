


#include <iostream>
#include <vector>
#include "Subject.h"
#include "Observer.h"

using namespace std;




int main(void){
    
    Subject subj;
    Observer *obs1 = new Observer(&subj);
    Observer *obs2 = new Observer(&subj);
    return 0;
}