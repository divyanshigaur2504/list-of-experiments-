#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Enter initial size: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));
    printf("Enter %d integers: ", n);
    for(i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("Array before realloc:\n");
    for(i=0; i<n; i++) printf("%d ", arr[i]);

    int newSize;
    printf("\nEnter new size: ");
    scanf("%d", &newSize);

    arr = (int*) realloc(arr, newSize * sizeof(int));
    printf("Enter %d more integers: ", newSize-n);
    for(i=n; i<newSize; i++) scanf("%d", &arr[i]);

    printf("Array after realloc:\n");
    for(i=0; i<newSize; i++) printf("%d ", arr[i]);

    free(arr);
    return 0;
}
