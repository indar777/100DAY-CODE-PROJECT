#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("Temperature in Fahrenheit = %f", (celsius * 9/5) + 32);
    
}