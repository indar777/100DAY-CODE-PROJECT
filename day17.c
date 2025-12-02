#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, digits = 0;
    unsigned long long sum = 0;

    scanf("%d", &num);
    original = num;

    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}