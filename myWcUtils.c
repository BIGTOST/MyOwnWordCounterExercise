#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "myWcUtils.h"

bool isAFlag(char stringVal[]){   
    for(long unsigned int i = 1; i < strlen(stringVal);i++){        
        if(stringVal[i]=='.' || isdigit(stringVal[i]))   {
            return false;
        }
    }
    if(stringVal[0] != '-') {
        return false;
    } 
    return true;
}

void noFileSpecify() {
    printf("No file was specified, please try again\n");
}


