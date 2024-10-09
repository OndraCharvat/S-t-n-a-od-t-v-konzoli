
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char equation[100];
    printf("Zadejte příklad: ");
    fgets(equation, 100, stdin);

    int result = 0;
    int number = 0;
    char operation = '+';
    for (int i = 0; equation[i] != '\0'; i++) {
        if (isdigit(equation[i])) {
            number = number * 10 + (equation[i] - '0');
        } else if (equation[i] == '+' || equation[i] == '-') {
            if (operation == '+') {
                result += number;
            } else if (operation == '-') {
                result -= number;
            }
            operation = equation[i];
            number = 0;
        }
    }

    if (operation == '+') {
        result += number;
    } else if (operation == '-') {
        result -= number;
    }

    printf("Výsledek: %d\n", result);

    return 0;
}
