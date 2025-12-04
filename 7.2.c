#include <stdio.h>
int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("Initial pointer: %p, value: %d\n", (void*)p, *p);
    p++;
    printf("After increment: %p, value: %d\n", (void*)p, *p);
    p--;
    printf("After decrement: %p, value: %d\n", (void*)p, *p);

    return 0;
}
