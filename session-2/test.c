#include <stdlib.h>
#include <stdio.h>

int main ( void ) {
    int k = 3;
    float *pk = &k;

    printf( "%f\n", &pk );


    return 0;
}