#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    printf("Simple Calculator (+, -, *, /)\n");
    printf("Enter operator: ");
    scanf(" %c", &op);  // space before %c to avoid input issues

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (op == '+') {
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    }
    else if (op == '-') {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    }
    else if (op == '*') {
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    }
    else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}
