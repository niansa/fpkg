#include <stdio.h>
#include <string.h>

#include "colors.h"

int version() {
    printf(RED "fpkg Version: " RESET "1.0-0.1\n");
    return 0;
}