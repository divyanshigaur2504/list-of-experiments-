#include <stdio.h>

void testLocal() {
    int localVar = 50;  
    printf("Local variable inside function: %d\n", localVar);
}

int main() {
    testLocal();
  
    return 0;
}
