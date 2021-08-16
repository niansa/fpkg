#include <stdio.h>
#include <string.h>

#include "colors.h"

int help() {
    printf(RED "fpkg - FoxOS-Package\n" RESET);
    printf("****************************************\n");
    printf("fpkg help | -h: Shows this message\n");
    printf("fpkg add | -i: Installs a package\n");
    printf("fpkg ver | -v: Returns the current version of Patter\n");
    printf("fpkg sync | -s: Returns the current version of Patter\n");
    

    return 0;
}