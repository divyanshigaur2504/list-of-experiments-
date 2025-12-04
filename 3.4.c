#include <stdio.h>

float calculateSalary(float basic, int metro) {
    float hra = metro ? 0.15 * basic : 0.10 * basic;
    float da = 0.05 * basic;
    return basic + hra + da;
}

int main() {
    float basic;
    int metro;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);
    printf("Is employee in metro city? (1=Yes, 0=No): ");
    scanf("%d", &metro);

    printf("Monthly Salary = %.2f\n", calculateSalary(basic, metro));
    return 0;
}
