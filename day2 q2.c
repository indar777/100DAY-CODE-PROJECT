#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Area = %f", PI * radius * radius);
    printf("Circumference = %f", 2 * PI * radius);

    return 0;
}