#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    scanf("%d %d %c", &num1, &num2, &op);

    switch(op) {
        case '+':
            printf("%d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("%d", num1 / num2);
            else
                printf("Error: Division by zero");
            break;
        case '%':
            if(num2 != 0)
                printf("%d, num1 % num2);
            else
                printf("Error: Modulus by zero");
            break;
        default:
            printf("Error: Invalid operator");
    }

    return 0;
}