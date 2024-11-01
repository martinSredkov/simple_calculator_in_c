#include <stdio.h>

int main() {
    float first_number, second_number;
    char operation;
    float result;

    printf("Enter the first number:\n");
    if (scanf("%f", &first_number) == 0) {
        printf("Invalid number!");
        return 1;
    }

    printf("Enter second number:\n");
    if (scanf("%f", &second_number) == 0) {
        printf("Invalid number!");
        return 1;
    }

    printf("Enter operation - '+', '-', '/' or '*'\n");
    scanf(" %c", &operation);

    if (operation == '+') {
        result = first_number + second_number;
    } else if (operation == '-') {
        result = first_number - second_number;
    } else if (operation == '/') {
        if (second_number == 0) {
            printf("Cannot divide by 0\n");
            return 1;
        }
        result = first_number / second_number;
    } else if (operation == '*') {
        result = first_number * second_number;
    } else {
        printf("Invalid operation\n");
        return 1;
    }
    printf("Result: %.2f", result);
    return 0;
}
