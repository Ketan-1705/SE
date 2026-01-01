//Write a C program that calculates the factorial of a given number using a function. 
//? Challenge: Implement both an iterative and a recursive version of the factorial function and 
//compare their performance for large numbers. 
#include <stdio.h>
#include <conio.h>

#include <stdio.h>
#include <conio.h>

/* Iterative factorial */
int factorial_iterative(int n) {
    int fact = 1;
    int i;   

    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

/* Recursive factorial */
//int factorial_recursive(int n) {
//    if (n == 0 || n == 1)
//        return 1;
//    return n * factorial_recursive(n - 1);
//}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Iterative factorial: %d\n", factorial_iterative(n));
//    printf("Recursive factorial: %d\n", factorial_recursive(n));

    return 0;
}


