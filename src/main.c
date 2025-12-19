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
                printf("%s",argv[1]);
            }
        }break;
        default:{
            for(int i = 0; i < argc; i++)
            {
                printf("%s\n", argv[i]);
            }
        }break; 
    }
    return 0;
}

