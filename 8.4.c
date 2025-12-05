#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size;
    printf("Enter initial size of string: ");
    scanf("%d", &size);

    char *str = (char*) malloc(size * sizeof(char));
    printf("Enter a string: ");
    scanf("%s", str);

    printf("You entered: %s\n", str);

    int newSize;
    printf("Enter new size: ");
    scanf("%d", &newSize);

    str = (char*) realloc(str, newSize * sizeof(char));
    strcat(str, "_Extended");

    printf("After realloc and append: %s\n", str);

    free(str);
    return 0;
}
