//Write a C program that takes an integer from the user and calculates the sum of its digits using a while loop.
 //Challenge: Extend the program to reverse the digits of the number

#include <stdio.h>
#include <conio.h>

void main() {
    int a, sum = 0, stor,rev =0;

    printf("Enter Number: ");
    scanf("%d", &a);

    while (a > 0) {
        stor = a % 10;      
        sum = sum + stor;  
        rev = rev * 10 + stor;
        a=a/10;
         
    }

    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d", rev);

    getch();
}

