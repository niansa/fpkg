#include <stdio.h>
#include <string.h>

#include "help.h"
#include "colors.h"


int main(int argc, char* argv[]) {

    if (argc == 1)
        printf(RED "E: " RESET "No Argument was given. Run fpkg help for Commands \n");

    else if ((!strcmp(argv[1], "help") && argc == 2) ||
        (!strcmp(argv[1], "help") && argc == 2))


    return help() + 1;
}