#include <stdio.h>

int main() {
    int num, remainder, product = 1;
    int has_odd = 0;

    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            has_odd = 1;
        }
        num /= 10;
    }

    if (!has_odd)
        product = 1;

    printf("%d", product);

    return 0;
}