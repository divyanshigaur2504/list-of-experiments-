#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Enter number of integers: ");
    scanf("%d", &n);

    int *arr = (int*) calloc(n, sizeof(int));

    printf("Values after calloc (zero initialized):\n");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter %d integers: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Updated array:\n");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
