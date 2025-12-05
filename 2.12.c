#include <stdio.h>

int main() {
    int choice1, choice2;
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nMain Menu:\n");
    printf("1. Relational Operators\n");
    printf("2. Logical Operators\n");
    printf("3. Bitwise Operators\n");
    printf("4. Assignment Operators\n");
    printf("5. Increment/Decrement Operators\n");
    printf("Enter your choice: ");
    scanf("%d", &choice1);

    switch (choice1) {
        case 1: // Relational
            printf("\nRelational Menu:\n");
            printf("1. Greater Than\n2. Less Than\n3. Equal To\n");
            scanf("%d", &choice2);
            switch (choice2) {
                case 1: printf("%d > %d = %d\n", a, b, a > b); break;
                case 2: printf("%d < %d = %d\n", a, b, a < b); break;
                case 3: printf("%d == %d = %d\n", a, b, a == b); break;
                default: printf("Invalid choice\n");
            }
            break;

        case 2: // Logical
            printf("\nLogical Menu:\n");
            printf("1. AND\n2. OR\n3. NOT (on a)\n");
            scanf("%d", &choice2);
            switch (choice2) {
                case 1: printf("%d && %d = %d\n", a, b, (a && b)); break;
                case 2: printf("%d || %d = %d\n", a, b, (a || b)); break;
                case 3: printf("!%d = %d\n", a, !a); break;
                default: printf("Invalid choice\n");
            }
            break;

        case 3: // Bitwise
            printf("\nBitwise Menu:\n");
            printf("1. AND\n2. OR\n3. XOR\n");
            scanf("%d", &choice2);
            switch (choice2) {
                case 1: printf("%d & %d = %d\n", a, b, a & b); break;
                case 2: printf("%d | %d = %d\n", a, b, a | b); break;
                case 3: printf("%d ^ %d = %d\n", a, b, a ^ b); break;
                default: printf("Invalid choice\n");
            }
            break;

        case 4: // Assignment
            printf("\nAssignment Menu:\n");
            printf("1. +=\n2. -=\n3. *=\n");
            scanf("%d", &choice2);
            switch (choice2) {
                case 1: a += b; printf("a += b → %d\n", a); break;
                case 2: a -= b; printf("a -= b → %d\n", a); break;
                case 3: a *= b; printf("a *= b → %d\n", a); break;
                default: printf("Invalid choice\n");
            }
            break;

        case 5: // Increment/Decrement
            printf("\nInc/Dec Menu:\n");
            printf("1. Pre-Increment\n2. Post-Increment\n3. Pre-Decrement\n4. Post-Decrement\n");
            scanf("%d", &choice2);
            switch (choice2) {
                case 1: printf("++a = %d\n", ++a); break;
                case 2: printf("a++ = %d\n", a++); printf("Now a = %d\n", a); break;
                case 3: printf("--a = %d\n", --a); break;
                case 4: printf("a-- = %d\n", a--); printf("Now a = %d\n", a); break;
                default: printf("Invalid choice\n");
            }
            break;

        default:
            printf("Invalid main choice\n");
    }

    return 0;
}
