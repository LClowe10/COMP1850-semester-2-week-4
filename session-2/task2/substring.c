/*
 * Find a substring within a given string
 */

 // create a program to locate a substring "ump" within a given string "The quick brown fox jumped over the lazy dog"

 /*  Hints:
 1. include the appropriate libraries
 2. create the main function
 3. define the program data as strings
 4. using the string library documentation find the appropriate string function
 5. implement the solution and compute the answer  
 6. print the answer appropriately as pointer, character and string
 */ 

#include <stdio.h>
#include <string.h>

int main( void ) {
    char src[] = "Oh, can't you see me standing here I've got my back against the record machine? I ain't the worst that you've seen Oh, can't you see what I mean? Ah, might as well jump!";
    char search[] = "jam";

    char* found = strstr(src, search);
    if (found) {
        printf("Found %s in %s at position %d\n", search, src, *found);
    }
    else {
        printf("Did not find %s in %s\n", search, src);
    }
}