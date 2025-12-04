#include <stdio.h>
int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    printf("Integer: %d, Pointer value: %d\n", a, *pInt);
    printf("Float: %.2f, Pointer value: %.2f\n", b, *pFloat);
    printf("Char: %c, Pointer value: %c\n", c, *pChar);

    return 0;
}
