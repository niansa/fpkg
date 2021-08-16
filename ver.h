#include <stdio.h>
#include <string.h>

#include "colors.h"

int version() {
    printf(RED "fpkg Version\n" RESET);
    printf("****************************************\n");
    printf("patter add: Installs a package\n");

    return 0;
}