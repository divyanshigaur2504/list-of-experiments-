#include <stdio.h>

void displayStudent(char name[], int roll, float marks) {
    printf("\n--- Student Details ---\n");
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", name, roll, marks);
}

int main() {
    char name[20];
    int roll;
    float marks;

    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Roll No: ");
    scanf("%d", &roll);
    printf("Enter Marks: ");
    scanf("%f", &marks);

    displayStudent(name, roll, marks);
    return 0;
}
