#include <stdio.h>
#include <string.h>

#include "colors.h"

int sync() {
    printf(RED "PKG_SYNC\n" RESET);
    return 0;
}