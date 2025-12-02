#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum =i+1;
    }
    printf("Sum of first %d natural numbers = %d", n, sum);
}