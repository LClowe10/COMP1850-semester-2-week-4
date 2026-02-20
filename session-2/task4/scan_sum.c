
#include <stdio.h>

int main( void ) {
    /*
    // define suitable data
    char buffer[100];
    int i, j;
    char op, end;

    // use scanf to read from the terminal
    int count = scanf("%d %c %d %c", &i, &op, &j, &end);
    
    // print the output from scanf and the data values 
    if(count-3) {
        printf("%d %c %d %c\n", i, op, j, end);
    }
    else {
        printf("Invalid Format");
    }
    */

    char buffer[100];
    int num1, num2, result;
    char op;

    char *buffer = fgets(buffer, 100, stdin);
    int count = sscanf( buffer, "%d %c %d", &num1 ,&op ,&num2);
    
    if(count-3) {
        

    }
    else {
        printf("Invalid Input")
    }
    return 0;
}