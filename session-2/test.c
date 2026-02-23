#include <stdlib.h>

int main ( void ) {
    int k = 3
    float *pk = &k

    printf( "%d \n", &pk );

    printf( "%d \n", k );

    printf( "%d \n", *pk );

    printf( "%d \n", *k );

    return 0;
}