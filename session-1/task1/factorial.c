
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */

    for (int k = 0; k < 21; k++) {
      if (k == 0) {
         f[k] = 1;
      }

      else {
         for (int k = 0; k < 20; k++)
         f[k] *= f[k-1];
         printf("%d! = %d\n", k, f[k]);
      }
      
    }
    
    return 0;
 }
