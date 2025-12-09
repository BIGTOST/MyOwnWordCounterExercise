#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isAFlag(char stringVal[])
{
    for(int i = 1; i < strlen(stringVal);i++)
    {
        if(stringVal[i] == '.' )
        {
            return false;
        }
    }

    if(stringVal[0] != '-')
    {
        return false;
    }

    return true;
}


int main(int argc, char* argv[])
{
    printf("%d",argc);
    switch (argc) {
        case 1:
            printf("No file was specified, please try again\n");
            break;
        case 2:
            if(isAFlag(argv[0]))
            {
                printf("Im a flag:");
                printf("%s",argv[1]);
            }
            else {
                    printf("%s\n", argv[1]);
                }
            break;
    
    }
    return 0;
}

