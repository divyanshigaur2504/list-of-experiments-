#include <stdio.h>

int main() {
    int x = 10;
    {
        int y = 20;  // Block scope
        printf("Inside block: x = %d, y = %d\n", x, y);
    }
    
    printf("Outside block: x = %d\n", x);
    return 0;
}
