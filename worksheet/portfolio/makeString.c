
/*
Name:
Student ID:
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[100];

    // process the command-line data using appropriate string functions
    for (int k = 1; k < argc; k++) {
    if (k < (argc - 1)) {
            char current[10]; strcpy(current, argv[k]);
            strcat(current, "-");
            strcat(buffer, current);
        }

        else {
            strcat(buffer, argv[k]);
        }
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}