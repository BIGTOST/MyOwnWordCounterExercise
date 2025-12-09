#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "myWcUtils.h"


int main(int argc, char* argv[]){ 
    printf("%d\n",argc);
    switch (argc) {
        case 1:{
            noFileSpecify();
        }break;
        case 2:{
            
            if(isAFlag(argv[1])){
                noFileSpecify();
            }
            else {
                // add the logic to execute orde
            }
        }break;
        case 3:{
            
        }break; 
    }
    return 0;
}

