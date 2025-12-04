#include <stdio.h>
#define PI 3.14159

float area(float r) {
    return PI * r * r;
}

int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area of circle = %.2f\n", area(radius));
    return 0;
}
