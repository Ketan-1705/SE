#include <stdio.h>
#include <conio.h>

int main() {

    char operate;
    float a, b;

    printf("\nPress A for Addition");
    printf("\nPress B for Subtraction");
    printf("\nPress C for Multiplication");
    printf("\nPress D for Division");
    printf("\nEnter your choice: ");
    scanf(" %c", &operate);

    printf("\nEnter Value 1: ");
    scanf("%f", &a);

    printf("\nEnter Value 2: ");
    scanf("%f", &b);

    switch (operate) {
        case 'A':
        case 'a':
            printf("Addition = %.2f", a + b);
            break;

        case 'B':
        case 'b':
            printf("Subtraction = %.2f", a - b);
            break;

        case 'C':
        case 'c':
            printf("Multiplication = %.2f", a * b);
            break;

        case 'D':
        case 'd':
            if (b != 0)
                printf("Division = %.2f", a / b);
            else
                printf("Error: Division by zero!");
            break;

        default:
            printf("Invalid choice!");
    }

    getch();
    return 0;
}

