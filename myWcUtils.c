#include <stdio.h>
#include <stdbool.h>
#include "myWcUtils.h"

bool isAFlag(char stringVal[])
{    
    for(long unsigned int i = 1; i < strlen(stringVal);i++)
    {
        printf("%c\n",stringVal[i]);
        if(stringVal[i]=='.' || isdigit(stringVal[i]))
        {
            return false;
        }
    }
    if(stringVal[0] != '-')
    {
        printf("false\n");
        return false;
    } 
    return true;
}

void noFileSpecify()
{
    printf("No file was specified, please try again\n");
}


