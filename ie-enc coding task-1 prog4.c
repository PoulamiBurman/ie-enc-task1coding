#include <stdio.h>

int main()
{
    char operator;
    double n1, n2, result;

    printf("Enter two numbers:\n");
    scanf("%lf %lf", &n1, &n2);


    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);


    switch(operator)
    {
        case '+':
            result = n1 + n2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", n1, n2, result);
            break;
        case '-':
            result = n1 - n2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", n1, n2, result);
            break;
        case '*':
            result = n1 * n2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", n1, n2, result);
            break;
        case '/':
            if(n2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
            } else {
                result = n1 / n2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", n1, n2, result);
            }
            break;
        default:
            printf("Invalid operator entered.\n");
    }

    return 0;
}
