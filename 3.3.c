#include <stdio.h>

struct Employee {
    char name[20];
    int id;
    char department[20];
    float salary;
};

void displayEmployee(struct Employee e) {
    printf("\n--- Employee Details ---\n");
    printf("Name: %s\nID: %d\nDepartment: %s\nSalary: %.2f\n",
           e.name, e.id, e.department, e.salary);
}

int main() {
    struct Employee emp;
    printf("Enter Name: ");
    scanf("%s", emp.name);
    printf("Enter ID: ");
    scanf("%d", &emp.id);
    printf("Enter Department: ");
    scanf("%s", emp.department);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    displayEmployee(emp);
    return 0;
}
