
/*
 * Transpose of a matrix
 */

 #include <stdio.h>

 int main( void ) {
    int a[4][4];

    /*
    Intialise the matrix a to 2i-j.
    Print out matrix a. 
    Write code for the transpose - you can use other variables as necessary but not a cpoy of the matrix 
    Print the transpose.
    */

    for (int k = 0; k < 4; k++) {
      for (int j = 0; j < 4; j++) {
         a[k][j] = (2 * k) - j;
         printf("[%d][%d]: %d\n", k, j, a[k][j]);
      }
    }
    printf("\n\n");
    for (int k = 0; k < 4; k++) {
      for (int j = 0; j < 4; j++) {
         a[k][j] = a[j][k];
         printf("[%d][%d]: %d\n", k, j, a[k][j]);
      }
    }

    return 0;
 }
