#include <stdio.h>    // for input/output
#include <ctype.h>    // for character handling
#include <stdlib.h>   // for memory allocation, exit
#include <assert.h>   // for assertions
#include <stdarg.h>   // for variable argument functions
#include <time.h>     // for time functions
#include <math.h>     // for mathematical functions
#include <string.h>   // for string handling

// Example function using stdarg.h
void printNumbers(int count, ...) {
    va_list args;
    va_start(args, count);
    for(int i=0; i<count; i++) {
        int num = va_arg(args, int);
        printf("%d ", num);
    }
    va_end(args);
    printf("\n");
}

int main() {
    
    printf("Hello from stdio.h\n");

  
    char ch = 'a';
    printf("Uppercase of %c = %c\n", ch, toupper(ch));

  
    int *arr = (int*) malloc(3 * sizeof(int));
    arr[0]=10; arr[1]=20; arr[2]=30;
    printf("Array using malloc: %d %d %d\n", arr[0], arr[1], arr[2]);
    free(arr);

    
    int x = 5;
    assert(x > 0);  
    printf("Assertion passed: x > 0\n");

    
    printf("Printing numbers using variable arguments: ");
    printNumbers(4, 10, 20, 30, 40);

    
    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t));

    
    double val = 16.0;
    printf("Square root of %.2f = %.2f\n", val, sqrt(val));


    char str1[20] = "Hello";
    char str2[20] = "World";
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}
