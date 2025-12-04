#include <stdio.h>

int globalVar = 100;  

void display() {
    printf("Accessing globalVar inside function: %d\n", globalVar);
}

int main() {
    printf("Accessing globalVar in main: %d\n", globalVar);
    display();
    return 0;
}
