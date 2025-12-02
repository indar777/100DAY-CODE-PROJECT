#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0) {
            printf("The number is zero.");
        } else {
            printf("The number is positive.");
        }
    } else {
        printf("The number is negative.");
    }
    
}